for num in range(2, 11):
    for i in range(2, num):
        if num % i == 0:
            break
    else:
        print(f"{num} is a prime number.")

