track = [1 1 1 1 0 1;
         1 0 1 1 0 1;
         0 0 1 0 0 1;
         1 0 0 0 1 1;
         1 1 1 1 1 1];

% track = [1 1 1 1 1 1;
%          1 0 0 0 1 1;
%          0 0 1 0 0 1;
%          1 0 1 1 0 1;
%          1 1 1 1 0 1];


obs = [0 0 0 0 0 0;
       0 0 0 0 0 0;
       0 0 0 0 0 0;
       0 0 0 0 0 0;
       0 0 0 0 0 0];

goal = [5,1]; % goal point
start = [1,3]; % starting
prm = PRM(track); %create nav object
prm.plan()
prm.plan(start, goal)
prm.plot