ip = input()
d = {"Upper":0,"Lower":0}
for c in ip:
    if c.isupper():
        d["Upper"]+=1
    if c.islower():
        d["Lower"]+=1
print("Upper: ",d["Upper"])
print("Lower: ",d["Lower"])
