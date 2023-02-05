close all;
% Shaun Pritchard
% Ell 5661
% Problem 1.1 HW 2

tt = 0:0.1:1.6; % Time as distance

A = [0.9256 -0.2427 0.2904 0.9797; 0.2863 0.9508 -0.1181 -0.7888; -0.2474 0.1925 0.9496 1.3115; 0 0 0 1];
B = [0.9890 -0.0998 0.1092 0.4004; 0.0992 0.9950 0.0110 0.1555; -0.1098 0 0.9940 0; 0 0 0 1];

PosA =  [0.97 -0.8 1.3];
PosB = [0.4 0.15 0 ];

qpos = mtraj(@tpoly, PosA, PosB, tt);
plot(qpos)
title("Trajecctories of X(t) Y(t) and  Z(t)")
xlabel('Time (LY)')
ylabel('Spaceship movement in light years')
legend( {'X Position', 'Y Position', 'Z Position' }, 'Location', ' northeast')
set(gca, 'XTick', 1:21)
set(gca, 'XTickLabel', tt)

figure
RPYA = tr2rpy(A, 'xyz'); %Get roll, pitch yaw with angles of transformation for A
RPYB = tr2rpy(B, 'xyz'); %Get roll, pitch yaw with angles of transformation for B

qrpy = mtraj(@tpoly, RPYA,RPYB, tt);
plot(qrpy)
title("Trajecctories of RPY Angles")
xlabel('Time')
ylabel('Spaceship movement in rads(lY)')
legend({'Roll X', 'Pitch Y', 'Yaw Z' }, 'Location', ' northeast')
set(gca, 'XTick', 1:21)
set(gca, 'XTickLabel', tt)

tform1 =  A;
axang1 = tform2axang(tform);
tform2 =  B;
axang2 = tform2axang(tform);


% Convert homogeneous transformation to radian rotations

%tform_x = [1 0 0 0; 0 0 -1 0; 0 1 0 0; 0 0 0 1];
axang_x = tform2axang(tform);

%A
tform_a = [0.9256 -0.2427 0.2904 0.9797; 0.2863 0.9508 -0.1181 -0.7888; -0.2474 0.1925 0.9496 1.3115; 0 0 0 1];
axang_a = tform2axang(tform_a);
rotm_a = tform2rotm(tform_a);

%B
tform_b = [0.9890 -0.0998 0.1092 0.4004; 0.0992 0.9950 0.0110 0.1555; -0.1098 0 0.9940 0; 0 0 0 1];
axang_b = tform2rotm(tform_b);

%C
tformc_c =  [1 0 0 0.7; 0 1 0 0.7; 0 0 1 0.7;  0 0 0 1];
axang_c = tform2axang(tformc_c);
rotm_c = tform2rotm(tformc_c);

%D
tformc_d = [1 0 0 1; 0 1 0 1; 0 0 1 0;  0 0 0 1];
axang_d = tform2axang(tformc_d);
rotm_d = tform2rotm(tformc_d);


%PART II via points
% Acceleration time 1.6
via =[0.97 -0.8 pi/4; 0.4 0.15 pi/4; 7 7 pi/2; 1 1 pi; ];
q1 = mstraj(via(:,[1 2 3 4])',[0.1 0.1 0.1],[], via(:,1),1.6);
figure
plot(q1)
grid on
title('Going from A to C, then D reaching B. ')
xlabel("Time")
ylabel("Acceleration")
legend({'X Positon (yd)', 'Y Position (yd)', 'Angle turns with respect to X Axis (rad)'}, 'Location', 'NW')