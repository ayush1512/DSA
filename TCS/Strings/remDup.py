ip = input()
s = ""
for c in ip:
    if c not in s:
        s+=c
print(s)