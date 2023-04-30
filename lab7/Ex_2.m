

clear all; 
% basic vector operations
% podstawowe operacje na wektorach


v  = [2 4 5 6 7]
v0 = [2;4;5;6;7];
v1 = 1:1:10;
v2 = 1:2:10
v3 = -5:3:7

v4 = v3'

v5 = zeros(1,5);
v6 = ones(1,5)
v7 = 4*ones(3,1)

v8 = v1;
v9 = v1;
v10 = v1;

v8(2) = 0 
v9(1:2:8) = 0
v10(8:1:end) = [0 0 0 0 0 0 0]  % error!!! the vector you want to assign is greater than v10/% błąd!!! wektor który chcemy przypisać jest większy niż v10

v11 = v1(1:3)
v12 = v1(2:3:8)
v13 = v1(end-3:end)

v14 = [v11 v13]
v14(2) = []
v15 = v11,  v13
v15 = v11/2
v15 = v11./2
v16 = v11 + v11
v17 = v11 .* v11
%v18 = v11 * v11     % error!!! you can not multiply 1x3 and 1x3 vectors/błąd!!! nie można mnożyć wektorów 1x3 i 1x3
v19 = v11 * v11'
v20 = v11'* v11    

% operacje na stringach
% operations on strings
n1 = 'nowy_napis'
n2 = n1(2:5)
n3 = n1(end)
n4 = [n1  n1]
n5 = [n1 '_' n1]
n6 = [n1 n2]        % error !!! such assigning of vectors is not possible/błąd!!! takie przypisywanie wektórów nie jest możliwe 

% matrix operations
% operacje na macierzach

A = [1 2 3 4 5; 6 7 8 9 0]
A(1,:)
A(1,2:4)
A(2,2:2:4)

A(:)

v1 = A(1,:)
B = [v1 v1]
B = [v1' v1']
B = [v1; v1]

C = zeros(4,5)
C(1:2,:) = A
C(3:end,:) = B(:,1:5)

C(:,end) = []   
C(1,end) = []  % error !!! you can not delete a matrix element (you can only zero it)/błąd!!!  nie można usunąć elementu macierzy (można tylko go wyzerować)

D = C'     % transoponowanie/ % transposition
E = inv(D) % odwracanie / inversion

det(D)

size(A)
size(A,2)

size_A = size(A)

A+A
A*A
A*A'
A.*A
