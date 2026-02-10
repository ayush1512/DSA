import random as r
ip = [r.randint(0,20) for _ in range(0,1000)]

cnt = 1
for i in ip:
    if ip[0] < i:
        cnt+=1

print(cnt)