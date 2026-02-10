import math
from collections import defaultdict as d
pos = [0,0]
ip = input().split()
direction = d(int)
for i in range(0,len(ip),2):
    dir = ip[i]
    dis = int(ip[i+1])
    direction[dir] += dis
pos[0] = direction['UP'] - direction['DOWN']
pos[1] = direction['LEFT'] - direction['RIGHT']
res = math.sqrt(pos[0]**2 + pos[1]**2)
print(int(res))