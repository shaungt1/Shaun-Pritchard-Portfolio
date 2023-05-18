%cam = CentralCamera('focal', 0.014, 'pixel', 10e-6, 'resolution', [1280 1024], 'centre', [640 512], 'name', 'problem1')
%Tcam=SE3(0,0,1.0)
%P = mkgrid(3, 0.2, 'pose',Tcam);
cam=CentralCamera('focal', 0.014);
P=[0.3,0.4,3.0];
cam.project(P);
%[X,Y,Z]=mkcube(0.25,'pose',SE3(0,0,1), 'edge');
%cam.fov() *180/pi
%cube=mkcube(0.2, 'pose',SE3(0,0,1), 'edge')
%Tcam=SE3(-0.75,0,0.25)*SE3.Ry(0.8);
%cam.mesh(X,Y,Z, 'pose',Tcam)