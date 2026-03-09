ip1 = [1,3,4,5,2]
ip2 = set([2,4,3,1,7,5,15])

for i in ip1:
    if i not in ip2:
        print('Not')
        break
else:
    print("Yes")