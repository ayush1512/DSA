ip = input()
i = 0
j = len(ip)-1
while i < len(ip):
    if ip[i] == ip[j]:
        i+=1
        j-=1
    else:
        print('No')
        break
print('Yes')