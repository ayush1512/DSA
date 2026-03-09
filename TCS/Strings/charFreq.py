ip = input()
res = {}
for c in ip:
    res[c] = res.get(c,0)+1
for key,val in res.items():
    print(key,val)