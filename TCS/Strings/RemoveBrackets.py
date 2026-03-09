ip = "a+((b-c)+d)"
# for c in ip:
#     if c  in '()':
#        ip = ip.replace(c,'') 
# print(ip)
res = "".join(c for c in ip if c not in '()')
print(res)