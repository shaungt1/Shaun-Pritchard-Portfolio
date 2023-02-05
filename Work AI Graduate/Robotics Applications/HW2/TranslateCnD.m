
%C_ = [1 0 0 0.7; 0 1 0 0.7; 0 0 1 0.7; 0 0 0 1];
%D_ = [1 0 0 1; 0 1 0 1; 0 0 1 0; 0 0 0 1];


PosA =  [0.97 -0.8 1.3];
PosB = [0.4 0.15 0 ];
PosC = [7 7 7];
PosD = [1 1 0];

q0 = [0 0 0];
C = transl(7,7,0);
D = transl(1,1,0);

vi = [PosB; PosC; PosD] 
% Defining the max velocity and acceleration time 
vmax = 0.1 

tacc = 2 

q = mstraj(vi, vmax, [], q0, 1, tacc) 

plot(q) 