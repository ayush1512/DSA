ip = list(map(int,input().split()))
n = len(ip)
# res = []
# for i in range(n):
#     sum1 = sum(ip[:i])
#     sum2 = sum(ip[i+1:])
#     res.append([sum1,sum2])

# for i in range(len(res)):
#     if res[i][0] == res[i][1]:
#         print(i)
#         break

l = 0 
r = sum(ip)
for i in range(n):
    r-=ip[i]
    
    if l == r:
        print(i)
        break
    
    l+=ip[i]
else:
    print(-1)