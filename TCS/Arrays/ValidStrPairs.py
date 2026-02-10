ip = list(map(int,input().split()))
x = int(input())
y = int(input())
cnt = 0
for i in ip:
    for j in ip:
        n = int(str(i)+str(j))
        if n > x and n < y:
            print(n)
            cnt+=1
print(cnt)