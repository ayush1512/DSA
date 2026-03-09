ip = input()
res = ""
for c in ip:
    if c.islower():
        res+=c.upper()
    else:
        res+=c.lower()
print(res)