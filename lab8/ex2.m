clc; clearvars;

x1 = -5:0.01:5;

p1_1 = plot1(x1);
p2_1 = plot2(x1);
p1_2 = [];
p2_2 = [];

subplot(2,2,1)
plot(x1,p1_1)

subplot(2,2,2)
plot(x1,p2_1)

for x2 = 1:size(x1,2)
    p1_2(x2) = plot1(x1(x2));
    p2_2(x2) = plot2(x1(x2));
end

subplot(2,2,3)
plot(x1,p1_2)

subplot(2,2,4)
plot(x1,p2_2)