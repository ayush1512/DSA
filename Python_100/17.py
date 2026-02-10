from collections import defaultdict
# amt = 0
# ip = list(input().split())
ip = input().split()
# for i in range(0,len(ip)-1,2):
#     if ip[i] == 'D':
#         amt+=int(ip[i+1])
#     if ip[i] == 'W':
#         amt-=int(ip[i+1])

# d = {"D":0,"W":0}
# for i in range(0,len(ip)-1,2):
#     if ip[i] == 'D':
#         d['D']+=int(ip[i+1])
#     if ip[i] == 'W':
#         d['W']+=int(ip[i+1])
# amt = d['D']-d['W']

transaction = defaultdict(int)
for i in range(0,len(ip)-1,2):
    action = ip[i]
    amt = int(ip[i+1])
    transaction[action] += amt
final = transaction['D']-transaction['W']
print(final)
        
