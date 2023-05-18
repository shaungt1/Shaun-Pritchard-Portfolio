map_layout = [0 0 1 1 1 1 1 1;
       0 0 1 1 0 1 1 1;
       0 0 1 1 0 1 1 1;
       0 0 0 0 0 1 1 1;
       0 0 1 1 0 1 0 1;
       0 0 1 0 0 0 0 1;
       0 0 1 1 1 1 0 1;
       0 0 1 1 0 0 0 1;
       0 0 1 1 0 1 1 1;
       0 0 0 0 0 0 0 0;
       0 0 0 0 0 0 0 0];
map = binaryOccupancyMap(map_layout,1/20);
show(map,"local")
title('Q 1.5')
xlabel('X [feet]') 
ylabel('Y [feet]') 
hold on
plot_all();