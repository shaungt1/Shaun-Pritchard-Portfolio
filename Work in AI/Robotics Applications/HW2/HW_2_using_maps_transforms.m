clear all;clc; close all; 
%Jancarlos Gomez 
%Z23521760 
%Problem 3 
 map = [0,0,1,1,0,0; 0,0,0,0,0,0; 0,0,0,0,1,0; 0,0,1,1,1,0; 1,0,0,0,1,0; 
0,0,0,0,0,0] % map used for 3.2 and 3.3  start = [1 1]; % starting point for 3.1-3.3 goal = [6 6]; % ending point for 3.2 and 3.3 
 %3.1  
goal3_1 = [60 60]; %define the goal 
map3_1 = zeros(60) % create an array with only zeros 60x60 map3_1(40:50,1:9) = 1 % create obstacles on map map3_1(40:51,41:49) = 1 % create obstacles on map map3_1(30:40,21:49) = 1 % create obstacles on map map3_1(20:30,41:49) = 1 % create obstacles on map map3_1(1:9,30:49) = 1 % create obstacles on map bug = Bug2(map3_1); % create navigation object bug.plot(); % plot map 
p = bug.query(start, goal3_1,'animate'); % animate path bug.plot(p); % plot animation title('Bug2 Algorithm') xlim([0 60]);  ylim([0 60]); pause   %3.2 
figure % new figure 
dx=DXform(map); % constructs distance transform using map dx.plan(goal); % plan a path to the goal 
p = dx.query(start,'animate') %animate path from start dx.plot(p) % plor animation on map xlim([0 6]); ylim([0 6]); 
title('Distance Transform Algorithm') pause  
 
%3.2 Alternative  
%this method is used to meet the no diagonal motion requirement ds=Dstar(map,'cityblock'); % create navigation object c=ds.costmap(); % load costmap ds.plan(goal); % plan path to goal figure % new figure 
ds.query(start,'animate') % animate path from start to goal 
xlim([0 6]); ylim([0 6]);  
%Modify cost of each cell on map to create the desired distance transform 
%map  cell12=[1;2] cell13=[1;3]
cell14=[1;4] cell16=[1;6] 
 ds.modify_cost(cell12,2); ds.modify_cost(cell13,1); ds.modify_cost(cell14,0); ds.modify_cost(cell16,10); 
 cell21=[2;1] cell22=[2;2] cell23=[2;3] cell24=[2;4] cell25=[2;5] cell26=[2;6] 
 ds.modify_cost(cell21,0); ds.modify_cost(cell22,2); ds.modify_cost(cell23,2); ds.modify_cost(cell24,0); ds.modify_cost(cell25,1); ds.modify_cost(cell26,0); 
 cell32=[3;2] cell33=[3;3] cell35=[3;5] cell36=[3;6] 
 ds.modify_cost(cell32,1); ds.modify_cost(cell33,10); ds.modify_cost(cell35,3); ds.modify_cost(cell36,3); 
  cell42=[4;2] cell43=[4;3] cell45=[4;5] cell46=[4;6] 
 ds.modify_cost(cell42,1); ds.modify_cost(cell43,10); ds.modify_cost(cell45,3); ds.modify_cost(cell46,4); 
  cell51=[5;1] cell52=[5;2] cell56=[5;6] 
 ds.modify_cost(cell51,10); ds.modify_cost(cell52,1); ds.modify_cost(cell56,5); 
  
cell61=[6;1] cell62=[6;2] 
cell63=[6;3] cell64=[6;4] cell65=[6;5] 
 ds.modify_cost(cell61,10); ds.modify_cost(cell62,2); ds.modify_cost(cell63,3); ds.modify_cost(cell64,4); ds.modify_cost(cell65,5); 
 
ds.plan(); % update plan 
p=ds.query(start) % animate start to goal ds.plot(p) % plot animation 
xlim([0 6]); ylim([0 6]); 
title('Replicating a Distance Transform using a D* Algorithm') pause  % %3.3  
ds=Dstar(map); % create navigation object 
c=ds.costmap(); % load costmap ds.plan(goal); % plan path to goal figure % summon new figure  
ds.query(start,'animate') % animate sstart to goal xlim([0 6]); ylim([0 6]); 
title('D* Algorithm Without Costs Added') pause 
%Modify cost to add obstacles 
%Flooded Area NW flood14=[1;4] flood16=[1;6] flood24=[2;4] flood25=[2;5] flood26=[2;6] flood35=[3;5] flood36=[3;6] 
 ds.modify_cost(flood14,20); ds.modify_cost(flood16,20); ds.modify_cost(flood24,20); ds.modify_cost(flood25,20); ds.modify_cost(flood26,20); ds.modify_cost(flood35,20); ds.modify_cost(flood36,20); 
 
%Very Rough Terrain SE  rough42=[4;2] rough43=[4;3] rough51=[5;1] rough52=[5;2] rough61=[6;1] rough62=[6;2] rough63=[6;3] 
 ds.modify_cost(rough42,10); ds.modify_cost(rough43,10); ds.modify_cost(rough51,10);  ds.modify_cost(rough52,10); 
 ds.modify_cost(rough61,10); ds.modify_cost(rough62,10); ds.modify_cost(rough63,10); 
 
ds.plan(); % update plan p=ds.query(start) % animate start to goal ds.plot(p) % plot it on the map xlim([0 6]); ylim([0 6]); 
title('D* Algorithm With Costs Added') 

