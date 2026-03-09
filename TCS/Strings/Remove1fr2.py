str1 = 'xyzpw'
str2 = "lmno" 
res = ""
for c in str1:
    if c not in str2:
        res+=c
print(res)