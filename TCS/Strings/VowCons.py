ip = input()
v = 0
c = 0
for i in ip:
    if i.isalpha():
        if i in ('a','e','i','o','u'):
            v+=1
        else:
            c+=1
print(v,c)
            