ip = input()
res = ""
for c in ip:
    res+=chr(ord(c)+1)
print(res)