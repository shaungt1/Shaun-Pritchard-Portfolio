x0=[0 0 0];
xg=[5 5 pi/4];
r=sim('sl_drivepose',20);
q=r.find('y');
%t=r.find('t');
%mplot(t,q)
plot(q(:,1),q(:,2))
