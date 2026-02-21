ip = input().split()
print(max(ip, key=len))

# le = {}
# for i in ip:
#     le[i] = le.get(i,len(i))
# print(max(le,key=le.get))
