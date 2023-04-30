
% autoformatting: Ctrl + a, Ctrl + i( of the whole selected part)/ autoformatowanie: Ctrl+a, Ctrl+i (ca³oœci zaznaczonego fragmentu)
% % - commenting on the fragment to the right of the character/ komentowanie fragmentu po prawej od znaku 
% Ctrl+R, commenting the entire selected part/komentowanie zaznaczonego fragmentu kodu
% Ctrl+T, uncommenting the entire selected part/odkomentowanie zaznaczonego fragmentu kodu
% F9 - runnig the chosen part of the code/ uruchomienie zaznaczonego fragment kodu
% clc - czyszczenie command window/cleaning command window
% clear all - Workspace cleaning/czyszczenie Workspace
% close all - closing all of the opened figures/zamknicie wszystkich otwartych figur
clear all;

% matrix operations/operacje na macierzach
A = [1 2 3 4 5; 6 7 8 9 5];
A = [A' A'; A' A']

%% if, else if
if size(A,1)==size(A,2)
    disp(' the same number of the columns and rows ')
elseif size(A,1)<size(A,2)
    disp(' more columns than rows ')
else
    disp(' more rows than columns ')
end

%% pêtla for
disp(' for loop')
[rows, columns] = size(A)

kA = []

for k = 1:1:rows
    disp('iterator value:')
    k
    disp('k-th row of the matrix A:')
    A(k,:)
    kA = [kA; A(k,:)]
    % pause(1)
end

% kk = [4 1 3 5 4]
% 
% for k = kk
%     disp('iterator value:')
%     k
%     disp('k-th row of the matrix A:')
%     A(k,:)
%     pause(1)
% end

%% while loop/pêtla while

kM = []

disp(' While loop /Pêtla while ')
[rows, columns] = size(A)
m=1
while m <= rows
  disp('iterator value:')
  m
  disp('m-th row of the matrix A:')
  A(m,:)
  kM = [kM; A(m,:)]
  m = m + 1;
end

%compare matrices
C =kA~=kM


