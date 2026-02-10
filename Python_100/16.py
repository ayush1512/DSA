ip = map(int,input().split(','))
odd_sq = map(lambda x: x**2 if x%2!=0 else x,ip)
print(list(odd_sq))