% This function takes as parameters all the final values calculated from PSO operation and also takes in values from above functions to calculate Bus current injections, Line current flows, Line power flows and Bus Power Injections.


function [Pi Qi Pg Qg Pl Ql] =loadflow(nb,V,del,BMva,x)

Y =ybusppg(nb);                % Calling Ybus program
busd =busdatas(nb);            % Get busdatas..
lined =linedatas(nb);          % Get linedats
nl =length(fb);                % No. of Branches..
tb =lined(:,2);                % To bus number
fb =lined(:,1);                % From bus number
Del =180/pi*del;               % Bus Voltage Angles in Degree
Vm =pol2rect(V,del);           % Converting polar to rectangular
k1 =busd(:,2);                   %bus type
Pl =busd(:,7)   ;             % PLi..
Ql = busd(:,8)    ;             % QLi..
Pl2 = busd(:,5)     ;           % PLi..
Ql2 = busd(:,6)    ;            % QLi..
Sij = zeros(nb,nb);
Iij = zeros(nb,nb);
Si = zeros(nb,1);

% Bus Current-->Injections
 I =Y*Vm;
 Ia =angle(I);
 Im =abs(I);

%Line Current 
for m =1:nl
    p = fb(m); q = tb(m);
    Iij(p,q) = -(Vm(p) - Vm(q))*Y(p,q); % Y(m,n) = -y(m,n)..
    Iij(q,p) = -Iij(p,q);
end

Iij =sparse(Iij);
Iija =angle(Iij);
Iijm =abs(Iij);

% Line Power Flows..
for m = 1:nb
for n = 1:nb
if m ~= n
            Sij(m,n) =Vm(m)*conj(Iij(m,n))*BMva;
end
end
end
Qij =imag(Sij);
Pij = real(Sij) ;


% Line Loss
Lij = zeros(nl,1);
for m = 1:nl
    q = tb(m);
    p = fb(m); 
    Lij(m) =Sij(p,q) + Sij(q,p);
end

Lqij =imag(Lij);
Lpij = real(Lij) ;

% Bus Power-->Injections
for i = 1:nb
for k = 1:nb
        Si(i) = Si(i) + conj(Vm(i))* Vm(k)*Y(i,k)*BMva;
end
end
Qi = -imag(Si);
Pi =real(Si);
Pg= busd(:,5);
Qg= busd(:,6);
Pg(1)=sum(Pl)+sum(Lpij)-Pg(3);
Qg(3)=x;
Qg(1)=sum(Ql)+sum(Lqij)-Qg(3);


disp('####################################################################################');

disp('-----------------------------------------------------------------------------------------');

disp('                              PSO Loadflow Analysis ');

disp('-----------------------------------------------------------------------------------------');

disp('| Bus |    V   |  Angle  |     Injection      |     Generation     |          Load      |');

disp('| No  |   pu   |  Degree |    MW   |   MVar   |    MW   |  Mvar    |     MW     |  MVar | ');

for m = 1:nb
    disp('-----------------------------------------------------------------------------------------');
    fprintf('%3g', m); fprintf('  %8.4f', V(m)); fprintf('   %8.4f', Del(m));

    fprintf('  %8.3f', Pi(m)); fprintf('   %8.3f', Qi(m)); 

    fprintf('  %8.3f', Pg(m)); fprintf('   %8.3f', Qg(m)); 

    fprintf('  %8.3f', Pl(m)); fprintf('   %8.3f', Ql(m)); fprintf('\n');
end

disp('-----------------------------------------------------------------------------------------');

fprintf(' Total                  ');fprintf('  %8.3f', sum(Pi)); fprintf('   %8.3f', sum(Qi)); 

fprintf('  %8.3f', sum(Pi+Pl)); fprintf('   %8.3f', sum(Qi+Ql));

fprintf('  %8.3f', sum(Pl)); fprintf('   %8.3f', sum(Ql)); fprintf('\n');

disp('#########################################################################################');

disp('-------------------------------------------------------------------------------------');
disp('                              Line Flow and Losses ');
disp('-------------------------------------------------------------------------------------');
disp('|From|To |    P    |    Q     | From| To |    P     |   Q     |      Line Loss      |');
disp('|Bus |Bus|   MW    |   MVar   | Bus | Bus|    MW    |  MVar   |     MW   |    MVar  |');
for m = 1:nl
    p = fb(m); q = tb(m);

    disp('-------------------------------------------------------------------------------------');

    fprintf('%4g', p); fprintf('%4g', q); fprintf('  %8.3f', Pij(p,q)); fprintf('   %8.3f', Qij(p,q));

    fprintf('%4g', q); fprintf('%4g', p); fprintf('   %8.3f', Pij(q,p)); fprintf('   %8.3f', Qij(q,p));

    fprintf(' %8.3f', Lpij(m)); fprintf('   %8.3f', Lqij(m));
    fprintf('\n');
end

disp('-------------------------------------------------------------------------------------');

fprintf('   Total Loss                                                 ');

fprintf('  %8.3f', sum(Lpij)); fprintf('   %8.3f', sum(Lqij));  fprintf('\n');

disp('-------------------------------------------------------------------------------------');

disp('#####################################################################################');
clearvars -global