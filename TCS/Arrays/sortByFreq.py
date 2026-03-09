# ip = list(map(int,input().split()))
ip = [1,2,3,2,4,3,1,2]
f = {}
for i in ip:
    f[i] = f.get(i,0)+1
res = sorted(ip,key=lambda k: (-f[k],k))
print(res)