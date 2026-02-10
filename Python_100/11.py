ip = input().split(',')
res = [i for i in ip if int(i, 2) & 0b0101 in (0b0000, 0b1010)]
print(res)
