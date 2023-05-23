clc; clearvars;

x1 = -5:0.01:5;

p1_1 = plot1(x1);
p2_1 = plot2(x1);
p1_2 = [];
p2_2 = [];


for x2 = 1:size(x1,2)
    p1_2(x2) = plot1(x1(x2));
    p2_2(x2) = plot2(x1(x2));
end

save("lab_08.mat","x1","p1_1","p2_1");

clc; clearvars;

load("lab_08.mat")