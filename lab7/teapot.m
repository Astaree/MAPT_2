function [sum, dif,detA,detB] = teapot(A,B)
%TEAPOT Summary of this function goes here
%   Detailed explanation goes here
    sum = A + B;
    dif = A - B;
    detA = det(A);
    detB = det(B);
end

