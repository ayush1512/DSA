import random as r
tc = str(list(r.randint(0,100) for _ in range(0,1000000)))


with open('tc1.txt','w') as f:
    f.writelines(tc)