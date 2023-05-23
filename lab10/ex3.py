def nFac(n):
    ret = 1
    for i in range(1, n+1):
        ret *= i
    return ret

n = int(input("Enter a number: "))

print(f"{n}! = {nFac(n)}")
