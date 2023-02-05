clear all;clc; close all; 
%Shaun Pritchard
%HW2 Problem 3 
 


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
0,0,0,0,1,0,0,0,0,0]; % map used for 3.1 and 3.2  


start = [1 1]; % starting point for 3.1-3.2 
goal = [10,5]; % ending point for 3.2 and 3.3 
 
%3.1  
goal3_1 = [100 100]; %define the goal 
map3_1 = zeros(100) % create an array with only zeros 100 x 100
map3_1(40:50,1:9) = 1 % create obstacles on map 
map3_1(40:51,41:49) = 1 % create obstacles on map 
map3_1(30:40,21:49) = 1 % create obstacles on map 
map3_1(20:30,41:49) = 1 % create obstacles on map 
map3_1(1:9,30:49) = 1 % create obstacles on map 
bug = Bug2(map3_1); % create navigation object 
bug.plot(); % plot map 
p = bug.query(start, goal3_1,'animate'); % animate path 
bug.plot(p); % plot animation 
title('Bug2 Algorithm') 
xlim([0 60]);  
ylim([0 60]); 


 