tower=iread('eiffel-1.png','grey','double'); %import image
C=icorner(tower,'nfeat',1000);
idisp(tower, 'dark');
C.plot();