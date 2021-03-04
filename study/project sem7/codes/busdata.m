% This function provides Initial Bus data of the system to the main program 
function busdt = busdatas(num)

% Bus Type     Type Descrpition
% 1            Slack Bus
% 2            P-V Bus
% 3            P-Q Bus

%         |Bus | Type | Vsp | theta | PGi | QGi | PLi | QLi |  Qmin | Qmax |
busdat5 = [1     1      1.02   0      0     0     0     0       0       0;
           2     3      1      0      0     0    60     30      0       0;
           3     3      1.04   0      100   0     0     0       0       60;
           4     3      1      0      0     0    40     10      0       0;
           5     3      1      0      0     0    60     20      0       0;]; 

busdt = busdat5;