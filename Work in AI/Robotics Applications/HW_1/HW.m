R1 = trot2(-pi/2)
R2 = trot2( pi/2)

% Initila Position
F0 = transl2(5,-1)
plotvol([0 6 0 5])
trplot2(F0, 'frame', '1', 'color', 'r')


T1= transl2(5,3) * R2
trplot2(T1, 'frame', '2', 'color', 'b')

T2= transl2(4,3) * R1
trplot2(T2, 'frame', '3', 'color', 'g')

T3= transl2(4,4) * R2
trplot2(T3, 'frame', '4', 'color', 'r')

T4= transl2(2,4)* R1
trplot2(T4, 'frame', '5', 'color', 'b')

T5= transl2(2,3)* R2
trplot2(T5, 'frame', '6', 'color', 'y')

T6= transl2(0,3)* R1
trplot2(T6, 'frame', '7', 'color', 'r')