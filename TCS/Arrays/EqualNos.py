ip = list(map(int,input().split()))
cnt = 0
if ip[0] == ip[1] and ip[1] == ip[2]:
    print(0)
elif ip[0] == ip[1] or ip[1] == ip[2]:
    sorted(ip)
    while True:
        ip[0]+=1
        ip[1]+=1
        ip[2]-=1
        cnt+=1
        if ip[0] == ip[1] and ip[1] == ip[2]:
            break
    print(cnt)
else:
    print(-1)
    
