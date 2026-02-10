ip = list(map(int,input().split()))

# Method 1
# freq = {}

# for i in ip:
#     freq[i] = freq.get(i,0)+1
    
    # if i in freq:
    #     freq[i] += 1
    # else:
    #     freq[i] = 1
    
# print(freq)

# Method 2 
# from collections import defaultdict

# freq = defaultdict(int)

# for i in ip:
#     freq[i] += 1
    
# print(list(freq.items()))

# Method 3
from collections import Counter

freq = Counter(ip)
print(list(freq.items()))