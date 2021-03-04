lear all
clc
kount=0;
lim=15;
s1=0.493;
nbus = 5;                   
BMva=100;                   % Base MVA..
busd = busdatas(nbus);      % Calling busdatas
Y = ybusppg(nbus);          % Calling ybusppg.m 
Qg =busd(:,6)/BMva;        % generated reactive power.
Pg =busd(:,5)/BMva;        % gen  erated real power
Ql =busd(:,8)/BMva;        % load reactive power
Pl =busd(:,7)/BMva;        % load real power
Qlim1 = busd(:,9)/BMva;
Qlim2 = busd(:,10)/BMva;
Q =Qg -Ql;                % Qi =(QGi – Qli)
P =Pg -Pl;                % Pi =(PGi – Pli)
Qsp =Q    ;               % Q specified 
Psp =P   ;                 % P Specified
Qmin=Qlim1(3);
Qmax=Qlim2(3);
B =imag(Y)               % Susceptance matrix..
G =real(Y)               % Conductance matrix..

%---------------------PSO PARAMETERS INITIALIZATION --------------%
p=100;                  % no of particle
it=1000;
rp=1.1;
T=12;
rg=1.1;
rf=1;
f=zeros(p,it);
fp=zeros(p,1);
thp=zeros(p,5);
thg=zeros(p,5);
vp=zeros(p,5);
vg=zeros(p,5);
v=zeros(p,it,5);
th=zeros(p,it,5);
vth=zeros(p,it,5);
vv=zeros(p,it,5);
a=.05;
b=-0.05;
vth(:,1,:)=a+(b-a)*rand(p,5); %initial velocity of theta vector%
a=.05;
b=-0.05;
vv(:,1,:)=a+(b-a)*rand(p,5); %initial velocity of voltage vector%
vth(:,:,1)=0;
vv(:,:,1)=0;
a=0.5;
b=-0.5;
th(:,1,:)=a+(b-a)*rand(p,5);
a=1.1;
b=0.9;
v(:,1,:)=a+(b-a)*rand(p,5);
v(:,:,1)=1.02;
v(:,:,3)=1.04;
th(:,:,1)=0;
vg(:,1)=1.02;
vp(:,1)=1.02;
vg(:,3)=1.04;
vp(:,3)=1.04;
thp(:,1)=0;
thg(:,1)=0;
%-----------------------initial value of objective function-------------%
% Calculate P and Q
PVIND=zeros(p,1);
 
 for j=1:p
 Q =zeros(nbus,1);
 P =zeros(nbus,1);
 MPS=zeros(p,1);
 MQS=zeros(p,1);
 
for i = 2:nbus
        for k = 1:nbus
            P(i) = P(i) + v(j,1,i)* v(j,1,k)*(G(i,k)*cos(th(j,1,i)-th(j,1,k)) + B(i,k)*sin(th(j,1,i)-th(j,1,k)));
        end
end
 
for i = 2:nbus
        for k = 1:nbus
            Q(i) = Q(i) + v(j,1,i)* v(j,1,k)*(G(i,k)*sin(th(j,1,i)-th(j,1,k)) - B(i,k)*cos(th(j,1,i)-th(j,1,k)));
        end
           
end
 
 % real power mismatch
  MP=P-Psp;
  MPS=MP.^2;
  %reactive power mismatch in third bus
  Qsp(3)=Q(3);
  if Q(3)<Qmin;
      Q(3)=Qmin;
      PVIND(j,1)=1;
  else PVIND(j,1)=0;
  end
      if Q(3)>Qmax;
          Q(3)=Qmax;
          PVIND(j,1)=1;
  else PVIND(j,1)=0;
      end
   
  %reactive power mismatch
  MQ=Q-Qsp;
  MQ(3)=0;
  MQS=MQ.^2;
  %objective function value
  f(j,1)=sum(MPS)+sum(MQS);
  kount=kount+1;
 end
 
 %Initial personal best values
for i=1:p
    for k=2:5
        thp(i,k)=th(i,1,k);
    end
    for k=2:5
        vp(i,k)=v(i,1,k);
    end
end
%for Initial Global best values updation
fmin=min(f(:,1));
for k=1:p
    if f(k,1)==fmin
        gb=k;
    else
    end
end
%Initial global best value
 
for k=1:p
    for j=2:5
        thg(k,j)=th(gb,1,j);
    end
       for j=2:5
        vg(k,j)=v(gb,1,j);
    end
end
fgm = min(f(:,1));
 Q3=zeros(p,it);
for i=1:it
    %Repositioning
    
   %for inertia weight W
    wmax=.4;
    wmin=.4;
    w=wmax-((wmax-wmin)*i/it);
    %w =0.1+(rand()/2); 
      %velocity update
      %position update
for j=1:p
        for k=2:5
    
        vth(j, i+1 ,k) = w*vth(j,i,k) + rp*(thp(j,k)-th(j,i,k)) + rg*(thg(j,k)-th(j,i,k));
%        if vth(j, i+1 ,k)<-0.1
%            vth(j, i+1 ,k)=-0.1;
%         end
%         if vth(j, i+1 ,k)>0.1
%            vth(j, i+1 ,k)=0.1;
%         end
        th(j,(i+1),k) = th(j,i,k) + rf*vth(j,(i+1),k);
        %Repositioning
        if i==lim+1
           th(j,i+1,k)=(s1*th(gb,lim,k)*f(gb,lim)^-1+thp(j,k)*fp(j)^-1)/(s1*f(gb,lim)^-1+fp(j)^-1);
        end
        end
          
        
        for q=2:5
        vv(j,(i+1),q) = w*vv(j,i,q) + rp*(vp(j,q)-v(j,i,q)) + rg*(vg(j,q)-v(j,i,q));
        if  vv(j,(i+1),q)<-0.1
              vv(j,(i+1),q)=-0.1;
        end
               if  vv(j,(i+1),q)>0.1
              vv(j,(i+1),q)=0.1;
               end
              
        v(j,(i+1),q) = v(j,i,q) + rf*vv(j,(i+1),q);
        %Repositioning
        if i==lim+1
            th(j,i+1,k)=(s1*th(gb,lim,k)*f(gb,lim)^-1+thp(j,k)*fp(j)^-1)/(s1*f(gb,lim)^-1+fp(j)^-1);
        end
        end
        for q=3
            if PVIND(j,1)==0
                v(j,(i+1),q)=1.04;
            end
        end
            
        
end
 
 
%th(:,i,5)
 
%objective function value
for j=1:p
 Q =zeros(nbus,1);
 P =zeros(nbus,1);
 MPS=zeros(p,1);
 MQS=zeros(p,1);
 
     for m =2:nbus
        for k =1:nbus
            P(m) =P(m) + v(j,(i+1),m)* v(j,(i+1),k)*(G(m,k)*cos(th(j,(i+1),m)-th(j,(i+1),k)) + B(m,k) * sin(th(j,(i+1),m)-th(j,(i+1),k)));
           
        end
     end
        for m = 2:5
        for k = 1:nbus
            Q(m) =Q(m) + v(j,(i+1),m)* v(j,(i+1),k)*(G(m,k)*sin(th(j,(i+1),m)-th(j,(i+1),k)) - B(m,k)*cos(th(j,(i+1),m)-th(j,(i+1),k)));
           
        end
        end
  % real power mismatch
  MP=P-Psp;
  MPS=MP.^2;
  %reactive power mismatch in third bus
  Qsp(3)=Q(3);
  if Q(3)<Qmin;
      Q(3)=Qmin;
      PVIND(j,1)=1;
  else PVIND(j,1)=0;
  end
      if Q(3)>Qmax;
          Q(3)=Qmax;
          PVIND(j,1)=1;
  else PVIND(j,1)=0;
      end
   Q3(j,i)=Q(3);
  %reactive power mismatch
  MQ=Q-Qsp;
  MQ(3)=0;
  MQS=MQ.^2;
  %objective function value
  
  f(j,(i+1))=sum(MPS)+sum(MQS);
  kount=kount+1;
 
  
end
          %personal best values updatio 
for j=1:p
 Q =zeros(nbus,1);
 P =zeros(nbus,1);
 MPS=zeros(p,1);
 MQS=zeros(p,1);
        for t =2:nbus
        for k = 1:nbus
            P(t) = P(t) + vp(j,t)* vp(j,k)*(G(t,k)*cos(thp(j,t)-thp(j,k)) + B(t,k)*sin(thp(j,t)-thp(j,k)));
           
        end
        end
        for t = 2:nbus
        for k = 1:nbus
            Q(t) = Q(t) + vp(j,t)* vp(j,k)*(G(t,k)*sin(thp(j,t)-thp(j,k)) - B(t,k)*cos(thp(j,t)-thp(j,k)));
           
        end
        end
       
 % real power mismatch
  MP=P-Psp;
  MPS=MP.^2;
  %reactive power mismatch in third bus
  Qsp(3)=Q(3);
  if Q(3)<Qmin;
      Q(3)=Qmin;
      PVIND(j,1)=1;
  else PVIND(j,1)=0;
  end
      if Q(3)>Qmax;
          Q(3)=Qmax;
          PVIND(j,1)=1;
  else PVIND(j,1)=0;
      end
   
  %reactive power mismatch
  MQ=Q-Qsp;
  MQ(3)=0;
  MQS=MQ.^2;
  %objective function value
  %objective function value
  fp(j)=sum(MPS)+sum(MQS);
  kount=kount+1;
end
%personal best value updation
        for k=1:p
            for m=2:5
               if f(k,i)<fp(k)
               thp(k,m)=th(k,i,m);
             else
            end
       
        end
        
       end
          
        for k=1:p
             for m=2:5
             if f(k,i)<fp(k)
             else
             vp(k,m)=v(k,i,m);
            end
       
        end
      end
        
   %for Global best values updation
    if min(f(:,(i+1)))<fgm
        fgm=min(f(:,(i+1)));
    else
    end
    
  for m=2:5
       
        for k=1:p
        if f(k,i)==fgm
            for l=2:p
                thg(l,m) = th(k,i,m);     %global best values
               end
        else
       end
        
   end
  end
       for m=2:5
      
        for k=1:p
        if f(k,i)==fgm
            for l=2:p
                  vg(l,m) = v(k,i,m);          %global best values
            end
        else
        end
       
   end
       end
       
       
%  print = [th(:,i,1) th(:,i,2) th(:,i,3) th(:,i,4) th(:,i,5)  v(:,i,1) v(:,i,2) v(:,i,3) v(:,i,4) v(:,i,4)  f(:,i)];
   i
    f(gb,i)
 %    disp('  th1       th2        th3        th4      th5        v1       v2        v3       v4      v5          f')
    
  % disp(print)
  
       %stopping
       
    gb1=gb;
for k=1:p
    if f(k,1+1)==fgm
        gb1=k;
    else
    end
end
    if (f(gb1,i+1)<=10^(-T))
           
        break
    end
 
vth(gb1,(i+1),2);
end
%Q3(:,it)
bus=zeros(5,10) ;            
bus(1,3)=v(gb,i,1);
bus(2,3)=v(gb,i,2);
bus(3,3)=v(gb,i,3);
bus(4,3)=v(gb,i,4);
bus(5,3)=v(gb,i,5);
%bus angle updation
bus(1,4)=th(gb,i,1);
bus(2,4)=th(gb,i,2);
bus(3,4)=th(gb,i,3);
bus(4,4)=th(gb,i,4);
bus(5,4)=th(gb,i,5);
bus(3,6)=Q3(gb1,it)*BMva;
x=bus(3,6);
V = bus(:,3)    ;        % Specified Voltage..
del = bus(:,4) ; % Voltage Angle..
%load flow function calling
fprintf('kount value is %d\n',kount);
loadflow(nbus,V,del,BMva,x);
