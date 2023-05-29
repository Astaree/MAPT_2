clear;
clc;

load("tab_4.mat")

meanW = mean(tab_4); %120.29999
meanC = mean(tab_4(:)); %matrix 1x653

std = std(double(tab_4)); % matrix 1x653

% Use find(), ind2sub(), and sub2ind() to find elements smaller than double the mean
threshold = 2 * meanC;
indices = find(tab_4 < threshold); %found 317788 elements

tab_4(indices) = 0;
found_elements = tab_4(indices); %all 0