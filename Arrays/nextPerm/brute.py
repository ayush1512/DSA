from itertools import permutations
ip = list(map(int,input().split()))
perms = sorted(set(permutations(ip)))
# print(perms)
curr = tuple(ip)
for i in range(len(perms)):
    if perms[i] == curr:
        if i == len(perms)-1:
            print(list(perms[0]))
        else:
            print(list(perms[i+1]))

