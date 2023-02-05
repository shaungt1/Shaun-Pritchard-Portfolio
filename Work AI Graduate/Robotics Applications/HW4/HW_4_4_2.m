im=iread('church.png','grey','double'); %import image
idisp(im)
edges=icanny(im);
idisp(edges)
h=Hough(edges, 'suppress',10);
lines=h.lines();
lines=lines.seglength(edges);
