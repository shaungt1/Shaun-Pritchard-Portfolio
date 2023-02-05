%Load Image adelson.png
im = iread("adelson.png", "grey")
%Strucutre Element
se = strel('square', 150);
% Open Sequence
afterOpen = iopen(im,se);
% Display
idisp(afterOpen);
% Closing sequence
beforeClose = iclose(im,se);
idisp(beforeClose)
