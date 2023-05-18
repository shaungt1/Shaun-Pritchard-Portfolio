t=(0:0.07:7.77)';
q=jtraj([4 1 1], [-2 3.5 1], t);
figure(1);

plot(t, q(:,1:2,1));
title('Prismatic Joint values');
xlabel('T');
ylabel('Joint value');
figure(2);
plot(q(:,1),q(:,2));
title('X Y Z Trajectory');
xlabel('X Coordinate');
ylabel('Y Coordinate');
Zlabel('Z Coordinate');