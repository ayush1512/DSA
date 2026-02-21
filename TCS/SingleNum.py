ip = list(map(int,input().split()))
xor = 0
for i in ip:
    xor^=i
print(xor)