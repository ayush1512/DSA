ip = list(map(str,input().split()))
res = ip[0]
for c in ip:
    if len(c) > len(res):
        res = c
print(res)