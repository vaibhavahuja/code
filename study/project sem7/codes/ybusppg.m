% This function forms and returns the Bus Admittance Matrix 

function Y = ybusppg(num)       % Returns Y-->bus admittance matrix

linedata = linedatas(num);      % Calling Linedatas
x = linedata(:,4);              % Reactance=X
r = linedata(:,3);              % Resistance=R
z = r + i*x;                    % (Impedance)z matrix
fb = linedata(:,1);             % From bus number
tb = linedata(:,2);             % To bus number
a = linedata(:,6);              % Tap setting value..
b = linedata(:,5);              % Ground Admittance=B/2…
y = 1./z;                       % To get inverse of each element
b = i*b;                        % Make B imaginary

nl = length(fb);                % No. of branches...
nb = max(max(fb),max(tb));      % No. of buses
Y = zeros(nb,nb);               % Initialise YBus

% For Off Diagonal elem
for k = 1:nl
     Y(fb(k),tb(k)) =Y(fb(k),tb(k))-y(k)/a(k);
     Y(tb(k),fb(k)) =Y(fb(k),tb(k));
end

% For diagonal elem
for m = 1:nb
for n = 1:nl
if fb(n) == m
             Y(m,m) =Y(m,m)+y(n)/(a(n)^2) + b(n);
elseif tb(n) == m
             Y(m,m) =Y(m,m)+y(n) + b(n);
end
end
end