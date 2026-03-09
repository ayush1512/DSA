ip = list(map(int,input().split()))
n = len(ip)
p = int(input())
#Clockwise
# ip = ip[n-p:] + ip[:n-p]
# print(ip)

def rev(a,s,e):
    while s < e:
        a[s],a[e] = a[e],a[s]
        s+=1
        e-=1
rev(ip,0,n-1)
rev(ip,0,p-1)
rev(ip,p,n-1)
print(ip)


