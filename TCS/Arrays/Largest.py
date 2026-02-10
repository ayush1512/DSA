ip = list(map(int,input().split()))
print(max(ip))

m = ip[0]
for i in ip:
    if i < m:
        m = i

print(m)
        