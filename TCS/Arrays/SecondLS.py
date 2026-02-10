# METHOD 1 
# Time Complexity: O(n log n) - due to sorting

ip = list(set(map(int,input().split())))

# print(sorted(ip))

# if len(ip) > 1:
#     print(ip[1],ip[len(ip)-2])
# else:
#     print(-1)

#METHOD 2
# Time Complexity: O(n) - single pass through the array

if len(ip) < 2:
     print(-1)
else:
    ma = float('-inf')
    mi = float('inf')
    
    sma = float('-inf')
    smi = float('inf')
    
    for i in ip:
        if i > ma:
            ma,sma = i,ma
        elif i > sma and i != ma:
            sma = i
    print(ma,sma)
    
    for i in ip:
         if i < mi:
            mi,smi = i,mi
         elif i < smi and i != mi:
            smi = i
            
    print(mi,smi)