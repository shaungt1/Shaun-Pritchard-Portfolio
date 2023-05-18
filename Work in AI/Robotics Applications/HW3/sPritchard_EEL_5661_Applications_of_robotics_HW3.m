% Manipulator in 2D 1DOF robot with one joint variable E is the end
% effector 3x3 homogeneous transformation. E contians rotation and a
% translation

% 1DOF
import ETS2.*
a1 = 1;
E = Rz('q1')*Tx(a1);
E.fkine(30,'deg')

% 2DOF
import ETS2.*
a1 = 1;
a2 = 1;
E = Rz('q1')*Tx(a1)*Rz('q2')*Tx(a2);
E.fkine([30,40],'deg');


% Teach

import ETS2.*
a1 = 1;
a2 = 1;
E = Rz('q1')*Tx(a1)*Rz('q2')*Tx(a2);
E.fkine([30,40],'deg')
E.teach


% Plot kinimatic variable

import ETS2.*
a1 = 1;
a2 = 1;
E = Rz('q1')*Tx(a1)*Rz('q2')*Tx(a2);
E.fkine([30,40],'deg')
E.plot([25,-40],'deg')



