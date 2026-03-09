ip = [(1,5),(2,3),(4,2),(5,1),(2,4)]

# res = []
# for i in range(len(ip)):
#     for j in range(i,len(ip)):
#         if (ip[i][0],ip[i][1])==(ip[j][1],ip[j][0]):
#             res.append((ip[i][0],ip[i][1]))
#             continue
# print(res)

res = set()
r = []
for i in range(len(ip)):
    res.add((ip[i][1],ip[i][0]))
    if ip[i] in res:
        r.append(ip[i])
print(r)