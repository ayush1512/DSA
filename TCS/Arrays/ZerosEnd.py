ip = list(map(int,input().split()))

for i in ip:
    if i > 0:
        continue
    else:
        ip.remove(0)
        ip.append(0)
        
print(ip)