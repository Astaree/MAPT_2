num = 100

while num <= 150:
    if num % 5 == 0 or num % 7 == 0:
        num += 1
        continue
    print(num)
    num += 1