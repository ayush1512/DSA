x = int(input())
y = int(input())
if x < 0 or y > 9999:
    print(-1)
else:
    sum = 0
    for i in range(x,y+1):
        sum+=i        
    print(sum)