ip = input()
dup = {}
for c in ip:
    dup[c] = dup.get(c,0)+1
for k,v in dup.items():
    if v>1:
        print(k,v)
    