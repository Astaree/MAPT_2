clc;
clear;
x = [1,2,3;4,5,6;7,8,9];
x(1,2:end);
x(:,end);
disp x(1,:);
y=[8 1 6;3 5 7; 4 9 2];
if x == y:

end
z = find(y<10,3);
disp (z)

