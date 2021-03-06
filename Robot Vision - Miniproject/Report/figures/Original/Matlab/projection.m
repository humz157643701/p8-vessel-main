clear
clc
close all

original=imread('dots.png');
original=original(MyParameters.YMIN:MyParameters.YMAX,MyParameters.XMIN:MyParameters.XMAX,:);
imtool(original)
x=size(original,2);
y=size(original,1);
imwrite(original,'dots_cut.png');
image_points=[336 289;
              57 291;
              335 17;
              60 16;
              140 94;
              218 133]';

real_points=40*[0 0;
             0 7;
             7 0;
             7 7;
             5 5;
             4 3]';
        
 H=vgg_H_from_x_lin(image_points,real_points);  
