
L1 = [1, 2, 3, 5]
L2 = L1
print(L2)
print(id(L1))
print(id(L2))
L2[2:] = [0, 0, 0, 0, 0, 0]
print(id(L2))
print(L1)
print(L2)

print('\n ---------------- ')
L1 = [1, 2, 3, 5]
L2 = L1
print(id(L1))
print(id(L2))
L2 = [0, 0, 0, 0, 0]
print(L1)
print(L2)
print(id(L2))
