clear;  % Clear the workspace
clc;    % Clear the command window
A = [1 2 3; 4 5 6];  % Define a 2x3 matrix A with values
A  % Display the matrix A in the command window
A(:)  % Reshape the matrix A into a column vector
find(A==3)  % Find the linear indices of elements in A that equal 3
find(A(:)==3)  % Find the linear index of the element in A(:) that equals 3
ind = find(A==3);  % Store the linear index of the element in A that equals 3
[rows_ind, columns_ind] = find(A==3);  % Find the row and column indices of elements in A that equal 3
[rows_ind_a, columns_ind_a] = find(A(:)==3);  % Find the row and column indices of the element in A(:) that equals 3
A(rows_ind(1), columns_ind(1))  % Access the element in A using the row and column indices found earlier
A(ind(1))  % Access the element in A using the linear index found earlier
A(rows_ind_a(1), columns_ind_a(1))  % ERROR: Attempting to access an element in A using row and column indices of A(:), which is incorrect
