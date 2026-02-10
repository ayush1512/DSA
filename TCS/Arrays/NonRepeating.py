ip = input()

freq = {}
for i in ip:
    freq[i] = freq.get(i,0)+1
    
for key, value in freq.items():
    if value == 1:
        print(key)
        break
    
print('$')