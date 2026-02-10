import math
c = 50
h = 30
d = list(map(int,input("d Value:").split()))
for i in d:
    q = math.sqrt((2*c*i)//h)
    print(int(q))