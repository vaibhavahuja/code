% This function provides Line Bus data of the system to the main program 

function linedt =linedatas(num)

%         |  From |  To   |   R     |   X     |     B/2  |  X'mer  |
%         |  Bus  | Bus   |  pu     |  pu     |     pu   | TAP (a) |
linedat5 = [ 1      2       .1        0.4             0         1
             1      4       0.15      0.6            0         1
             1      5       0.05      0.2            0         1
             2      3       0.05      0.2            0         1
             2      4       0.10      0.4            0         1
             3      5       0.05      0.2            0         1];

linedt = linedat5;
