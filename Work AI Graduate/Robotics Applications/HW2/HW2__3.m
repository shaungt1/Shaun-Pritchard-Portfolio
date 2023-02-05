
clear all;clc; close all; 
%Shaun Pritchard 
%Problem HW2 3

% map3_1=makemap(10)
% point1 = 3.0922    3.2259
% point2 = 3.0922    3.2259

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
start = [1 1];
goal = [10 10];

 
goal3_1 = [100 100]; %define the goal 
map3_1 = zeros(100); % create an array with only zeros 

map3_1(20:50,1:9) = 1; % create obstacles on map 
map3_1(30:40,10:20) = 1; % create obstacles on map
map3_1(60:90,10:20) = 1; % create obstacles on map
map3_1(1:9,20:60) = 1; % create obstacles on map
map3_1(20:27,30:50) = 1; % create obstacles on map
map3_1(40:60,30:50) = 1; % create obstacles on map
map3_1(80:100,40:50) = 1; % create obstacles on map
map3_1(70:90,50:70) = 1; % create obstacles on map
map3_1(70:80,70:78) = 1; % create obstacles on map
map3_1(30:40,60:70) = 1; % create obstacles on map
map3_1(20:30,80:90) = 1; % create obstacles on map
map3_1(30:40,90:100) = 1; % create obstacles on map
map3_1(50:60,80:90) = 1; % create obstacles on map
map3_1(40:60,70:80) = 1; % create obstacles on map

bug = Bug2(map3_1); % create navigation object
bug.plot(); % Plot ma
p = bug.query(start, goal3_1,'animate'); % animate path
bug.plot(p); % Plot animation
title('Bug2 Algorithm') 
xlim([0 100]);  
ylim([0 100]); 


%3.2 
figure % new figure 
dx=DXform(map); % constructs distance transform using map 
dx.plan(goal); % plan a path to the goal 
p = dx.query(start,'animate') %animate path from start 
dx.plot(p) % plor animation on map 
xlim([0 10]); 
ylim([0 10]); 
title('Distance Transform Algorithm') 


%3.3 Alternative  
%this method is used to meet the no diagonal motion requirement 
ds=Dstar(map,'cityblock'); % create navigation object 
c=ds.costmap(); % load costmap 
ds.plan(goal); % plan path to goal 
figure % new figure 
ds.query(start,'animate') % animate path from start to goal 
xlim([0 10]); 
ylim([0 10]); 
 
%Modify cost of each cell on map to create the desired distance transform 
%map 
 
cell12=[1;2] ;
cell13=[1;3] ;
cell14=[1;4] ;
cell16=[1;6] ;
cell18=[1;8] ;
cell1=[1;10] ;
 
ds.modify_cost(cell12,2); 
ds.modify_cost(cell13,1); 
ds.modify_cost(cell14,0); 
ds.modify_cost(cell16,10); 
 
cell21=[2;1] ;
cell22=[2;2] ;
cell23=[2;3] ;
cell24=[2;4] ;
cell25=[2;5] ;
cell26=[2;6] ;
 
ds.modify_cost(cell21,0); 
ds.modify_cost(cell22,2); 
ds.modify_cost(cell23,2); 
ds.modify_cost(cell24,0); 
ds.modify_cost(cell25,1); 
ds.modify_cost(cell26,0); 
 
cell32=[3;2] 
cell33=[3;3] 
cell35=[3;5] 
cell36=[3;6] 
 
ds.modify_cost(cell32,1); 
ds.modify_cost(cell33,10); 
ds.modify_cost(cell35,3); 
ds.modify_cost(cell36,3); 
 
 
cell42=[4;2] 
cell43=[4;3] 
cell45=[4;5] 
cell46=[4;6] 
 
ds.modify_cost(cell42,1); 
ds.modify_cost(cell43,10); 
ds.modify_cost(cell45,3); 
ds.modify_cost(cell46,4); 
 
 
cell51=[5;1] ;
cell52=[5;2] ;
cell56=[5;6] ;
 
ds.modify_cost(cell51,10); 
ds.modify_cost(cell52,1); 
ds.modify_cost(cell56,5); 
 
 
cell61=[6;1] ;
cell62=[6;2] ;
cell63=[6;3] ;
cell64=[6;4] ;
cell65=[6;5] ;
 
ds.modify_cost(cell61,10); 
ds.modify_cost(cell62,2); 
ds.modify_cost(cell63,3); 
ds.modify_cost(cell64,4); 
ds.modify_cost(cell65,5);

ds.plan(); % update plan 
p=ds.query(start); % animate start to goal 
ds.plot(p) % plot animation 
xlim([0 10]); 
ylim([0 10]); 
title('Replicating a Distance Transform using a D* Algorithm')


%3.4
prm =PRM(map);
prm.plan('npoints',100)
prm.plot()


start = [15 1]; % define the starting point 
stop = [60 20]; 
% define the ending point 
ds=Dstar(map); % create navigation object 
c=ds.costmap(); % load costmap 
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

