clear
clc
close all


%    P Q
x1 = [0 0 0 0];
y1 = [5 5 8 8];
z1 = [0 2 2 0];
%     P Q
x2 = [0 0 -1 -1];
y2 = [5 5 5 5];
z2 = [0 2 2 0];

%    P2 Q2
x3 = [0 -2 -2 0];
y3 = [2 2 -1 -1];
z3 = [2 2 2 2];

%    P2 Q2
x4 = [0 -2 -2 0];
y4 = [2 2 2 2];
z4 = [2 2 3 3];

% Grid Limits
figure
xlim([-10 10])
ylim([-10 10])
zlim([-10 10])

% Axis Labels
xlabel('x')
ylabel('y')
zlabel('z')
hold on
patch(x1,y1,z1,'c')
patch(x2,y2,z2,'w')
patch(x3,y3,z3,'c')
patch(x4,y4,z4,'w')

T1 = transl(0,5, 0);

T2 = transl(-2,2,2);
trplot(T1,'frame', 'P_b_e_g_i_n', 'color', b');