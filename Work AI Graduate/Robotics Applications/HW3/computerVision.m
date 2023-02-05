x0=[2,3,0];
xg=[3,-3,4];
r=sim("sl_drivepose",5);
q=r.find('y');
t=r.find('t')
mplot(t,q)
plot(q(:,1),q(:,2))