T1 = (1, 2, 3)
print('T2 = T1')
T2 = T1
print('addresses of the T1 and T2:')
print(id(T1))
print(id(T2), '\n')

L1 = [1, 2, 3, 5]
T1 = (1, 2, 3)
print('address of the L1:')
print(id(L1), '\n')
print('address of the T1:')
print(id(T1), '\n')
print('T2 = L1')
T2 = L1
print('address of the T2')
print(id(T2), '\n')