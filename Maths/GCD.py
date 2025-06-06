x,y = map(int,input("Enter the numbers: ").split())
gcd = 1
for i in range(min(x,y),0,-1):
    if x % i == 0 and y % i == 0:
        gcd = i
        break
print(gcd)
