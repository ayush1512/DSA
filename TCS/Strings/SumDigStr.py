ip = input()
sum = 0
for i in ip:
    if i.isdigit():
        sum += int(i)
print(sum)
