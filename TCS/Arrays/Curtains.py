ip = input()
le = int(input())
n = len(ip)
for i in range(0,n,le):
    print(ip.count('a',i,i+le))