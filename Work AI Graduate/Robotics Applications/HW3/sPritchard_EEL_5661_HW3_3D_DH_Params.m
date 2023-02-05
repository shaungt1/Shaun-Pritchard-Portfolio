L = Revolute('a', 1);
% L=Revolute(std): theta=q, d=0, a=1, alpha=0, offset=0 
% L.A(0) % Gives 4x4 matrix from the joint variable
%L.a % Extract parameters
% L.offset=0.2;

robot = SerialLink([Revolute('a', 1.5,'d',0.1, 'alpha',0.1) Revolute('a', 1)],'name', 'X5');
robot.fkine([30,45], 'deg')
robot.plot([30,45], 'deg')