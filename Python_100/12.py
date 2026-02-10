# res = []
# ans = ""
# for i in range(1000,3001,1):
#     for d in str(i):
#         if int(d)%2==0:
#             ans+=d
#     if len(ans)==4:
#         res.append(ans)
#     ans = ""
# print(",".join(res))             

res = []
for i in range(1000,3001):
    d = str(i)
    if int(d[0])%2 == 0 and int(d[1])%2 == 0 and int(d[2])%2 == 0 and int(d[3])%2 == 0:
        res.append(d)
print(",".join(res))
    
