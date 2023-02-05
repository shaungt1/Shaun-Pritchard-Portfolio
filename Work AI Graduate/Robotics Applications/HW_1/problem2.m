R1 = rotx(pi/2)
R2 = rotx(-pi/2)

X = trotx(90,'deg')
Y = troty(90,'deg')
Z = trotz(90,'deg')
W = transl(0,0,0)
P1 = transl(0,5,0)
p2 = transl(-2,2,2)

trplot(W)
tranimate(W, 'nsteps', 50)
%R2 =R*R
%tranimate(R,R2, 'fps', 10)