def chkPass(input):
    res = []
    for ip in input:
        chk = {'lower':0, 'num':0, 'upper':0, 'sym':0}
        if 6<=len(ip)<=12:
            for i in ip:
                if i.isupper():
                    chk['upper']=1
                if i.isdigit():
                    chk['num']=1
                if i.islower():
                    chk['lower']=1
                if i in ('$','#','@'):
                    chk['sym']=1
            if all(value==1 for value in chk.values()):
                res.append(ip)
    return res
ip = input().split(',')
print(chkPass(ip))

# import re
# value = []
# items=[x for x in input().split(',')]
# for p in items:
#     if len(p)<6 or len(p)>12:
#         continue
#     else:
#         pass
#     if not re.search("[a-z]",p):
#         continue
#     elif not re.search("[0-9]",p):
#         continue
#     elif not re.search("[A-Z]",p):
#         continue
#     elif not re.search("[$#@]",p):
#         continue
#     elif re.search("\s",p):
#         continue
#     else:
#         pass
#     value.append(p)
# print(",".join(value))