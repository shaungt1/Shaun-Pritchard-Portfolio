track = [1 1 1 1 1 1;
         1 0 0 0 0 1;
         1 0 1 0 1 1;
         0 0 1 0 0 0;
         1 1 1 1 1 1];

obs = [0 0 0 0 0 0;
       0 0 0 0 0 0;
       0 0 0 0 0 0;
       0 0 0 0 0 0;
       0 0 0 0 0 0];


goal = [6,2]; % goal point
start = [1,2]; % starting
prm = PRM(track); %create nav object
prm.plan()
%prm.query(start, goal)
prm.plot