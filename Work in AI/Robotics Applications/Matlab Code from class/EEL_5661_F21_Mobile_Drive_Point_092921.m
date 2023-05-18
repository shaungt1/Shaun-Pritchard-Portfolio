x0=[0 0 pi];
xg=[5 5];
r=sim('sl_drivepoint',10);
q=r.find('y');
%t=r.find('t');
%mplot(t,q)
plot(q(:,1),q(:,2))
