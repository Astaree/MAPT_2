clearvars;
load("tab_4.mat")
I = eye(32)

histogram(I(:));
title('Histogram of matrix I');

% Histogram for matrix tab_4
histogram(tab_4(:));
title('Histogram of matrix tab_4');