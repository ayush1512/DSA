import math

for _ in range(2):
    n = int(input("Enter the number: "))
    count=0
    for i in range(1,int(math.isqrt(n))+1):
        if n % i == 0:
            count += 1
            if n // i != i:
                count += 1
    if count == 2:
        print("Yes")
    else:
        print("No") 