sharks=iread('sharks.png'); %import image
%idisp(sharks)
[label,m]=ilabel(sharks); %Set labels
blob=(label==2);
idisp(blob)
hold on
m00=mpq(blob,0,0);
uc=mpq(blob,1,0)/m00; %Calulate centriod uc=m10/m00
vc=mpq(blob,0,1)/m00; %Calulate centriod vc=m01/m00 
plot(uc,vc,'gx',uc,vc,'go'); %plot centriod
hold on
u20=upq(blob,2,0); % Diagnoal matrix u20
u02=upq(blob,0,2);% Diagnoal matrix u02
u11=upq(blob,1,1);
J=[u20 u11; u11 u02]; % calulate eingvalues of J
%plot_ellipse(4*J/m00, [uc,vc], 'y')
lambda=eig(J);
a=2*sqrt(lambda(2)/m00);% calualte square of J for position a
b=2*sqrt(lambda(1)/m00);% calualte square of J for position b
b/a;
[x,lambda]=eig(J);
x;
v=x(:,end); % calaulate X coordinate and y coordinate
atand(v(2)/v(1))