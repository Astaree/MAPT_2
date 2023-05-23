x = -5:0.01:5;
y = -5:0.01:5;

[z] = plotXY(x,y);

mesh(x,y,z);
print("mesh.png","-dpng");





% func1
function [z] = plotXY(x,y)
[x1,y1] = meshgrid(x,y);
z = x1.^3 + (y1+1).^2 +1;
end
