ip = list(map(int,input().split()))

print(list(reversed(ip)))

print(ip[::-1])

for i in range(len(ip)//2):
    ip[i],ip[len(ip)-i-1] = ip[len(ip)-i-1],ip[i]
    
print(ip)
    