clear all;clc; close all;

%Shaun Pritchard 
%3_4 4 
%4.1 
%map = makemap(100) 
%import map vector that was previously created to avoid having to remake 
map = [ 
 0,0,1,1,1,1,0,0,0,0;
 0,0,0,0,0,0,0,0,0,0;
 1,0,0,1,1,0,0,0,1,0;
 1,1,0,0,0,0,1,0,0,1;
 1,0,0,1,1,0,0,1,0,0;
 0,0,0,1,1,0,0,1,1,0;
 0,1,0,0,0,0,0,0,0,0;
 0,1,0,0,0,1,1,1,0,0;
 0,1,0,0,1,1,1,0,0,0;
 0,0,0,0,5,0,0,0,0,0;
];


start = [15 1]; % define the starting point 
stop = [60 20]; 
% define the ending point 
ds=Dstar(map); % create navigation object 
c=ds.costmap(); % load costmap 
ds.plan(stop); % create plan for end goal figure 
ds.query(start,'animate') % animate path from starting location  
xlim([0 100]); ylim([0 100]); 
title('D* Algorithm Without Costs Added') 



%Modify cost to add obstacles 
%obstacle 0 

roadblock0a=[19;24] 
roadblock0b=[20;24] 
roadblock0c=[21;24] 
roadblock0d=[22;24] 
roadblock0e=[23;24] 
roadblock0f=[24;24] 
roadblock0g=[25;24] 
roadblock0h=[26;24] 
roadblock0i=[27;24] 
roadblock0j=[28;24] 

 ds.modify_cost(roadblock0a,100); 
 ds.modify_cost(roadblock0b,100); 
 ds.modify_cost(roadblock0c,100); 
 ds.modify_cost(roadblock0d,100); 
 ds.modify_cost(roadblock0e,100); 
 ds.modify_cost(roadblock0f,100); 
 ds.modify_cost(roadblock0g,100); 
 ds.modify_cost(roadblock0h,100); 
 ds.modify_cost(roadblock0i,100); 
 ds.modify_cost(roadblock0j,100); 

%obstacle 1 
roadblock1a=[60;34] 
roadblock1b=[60;35] 
roadblock1c=[60;36] 
roadblock1d=[60;37] 
roadblock1e=[60;38] 
roadblock1f=[60;39] 
roadblock1g=[60;40] 

ds.modify_cost(roadblock1a,100);
ds.modify_cost(roadblock1b,100); 
ds.modify_cost(roadblock1c,100); 
ds.modify_cost(roadblock1d,100); 
ds.modify_cost(roadblock1e,100); 
ds.modify_cost(roadblock1f,100); 
ds.modify_cost(roadblock1g,100); 

%obstacle 2 
roadblock2a=[60;60] 
roadblock2b=[60;61] 
roadblock2c=[60;62] 
roadblock2d=[60;63] 
roadblock2e=[60;64] 
roadblock2f=[60;65] 
roadblock2g=[60;66] 
 
ds.modify_cost(roadblock2a,100); 
ds.modify_cost(roadblock2b,100);
ds.modify_cost(roadblock2c,100);
ds.modify_cost(roadblock2d,100); 
ds.modify_cost(roadblock2e,100); 
ds.modify_cost(roadblock2f,100); 
ds.modify_cost(roadblock2g,100); 

%obstacle 3 
roadblock3a=[70;50] 
roadblock3b=[71;50]
roadblock3c=[72;50] 
roadblock3d=[73;50]
roadblock3e=[74;50] 

 ds.modify_cost(roadblock3a,50); 
 ds.modify_cost(roadblock3b,50); 
 ds.modify_cost(roadblock3c,50); 
 ds.modify_cost(roadblock3d,50); 
 ds.modify_cost(roadblock3e,50); 

%obstacle 4 
roadblock4a=[70;19] 
roadblock4b=[71;19] 
roadblock4c=[72;19] 
roadblock4d=[73;19] 
roadblock4e=[74;19] 

ds.modify_cost(roadblock4a,50); 
ds.modify_cost(roadblock4b,50); 
ds.modify_cost(roadblock4c,50); 
ds.modify_cost(roadblock4d,50); 
ds.modify_cost(roadblock4e,50); 
 
ds.plan(); % update plan 
p=ds.query(start) % generate path from start  
ds.plot(p) % plot path 
xlim([0 80]);  
ylim([0 80]); 
title('D* Algorithm With Costs Added') 
  
%4.3 
%create Voronoi Diagram figure 
prm = PRM(map);   
prm.plan('npoints',250); 
prm.plot(); 
xlim([0 80]); 
ylim([0 80]); 
title('Voronoi Diagram for Free Space on Map') 
  
%4.4 
%Demonstrate Probabilistic Roadmap Navigation Twice 
%First Demonstration 
prm.query(start,stop); 
prm.plot(); 
xlim([0 80]); 
ylim([0 80]); 
title('First Demonstration of Probabilistic Roadmap Navigation')  


%Second Demonstration 
start2 = [45 15]; 
stop2 = [62 75]; 
figure 
prm.query(start2,stop2); 
prm.plot(); 
xlim([0 80]); 
ylim([0 80]); 
title('Second Demonstration of Probabilistic Roadmap Navigation')

