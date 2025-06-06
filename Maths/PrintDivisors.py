import math
x = int(input("Enter the number: "))
div = []
for i in range(1,int(math.isqrt(x))+1):
    if x % i == 0:
        print(i)
        if x // i != 1:
            div.append(x//i)
for d in reversed(div):
    print(d)