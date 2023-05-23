def findDiv(n:int,m:int,div:int, ndiv:int):
    res = []
    for i in range(n,m+1):
        if i%div==0 and i%ndiv!=0:
            res.append(i)
    return res

if __name__ == "__main__":
    n = 2000
    m = 3200
    div = 7
    ndiv = 5
    r = findDiv(n,m,div,ndiv)
    print(r)
    print(f"Found: {len(r)}")