# import string as s 
# ip = list(input())
# dig = 0
# lett = 0
# for i in ip:
#     if i in s.digits:
#         dig+=1
#     if i in s.ascii_letters:
#         lett+=1
    
# print("DIGITS: ",dig)
# print("LETTERS: ",lett)
    
ip = input()
d = {"Digits":0,"Letters":0}
for c in ip:
    if c.isdigit():
        d["Digits"]+=1
    if c.isalpha():
        d["Letters"]+=1
print("Letters: ",d["Letters"])
print("Digits: ",d["Digits"])
