from collections import Counter
ip = list(map(str,input().split()))
res = {}
cnt = 0
for i in ip:
    ccnt = 0
    c = Counter(i)
    for k,v in c.items():
        if v > 1:
            ccnt+=1
    res[i] = ccnt
    
print(max(res,key=res.get))