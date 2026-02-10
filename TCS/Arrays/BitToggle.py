ip = int(input())

bit = list(bin(ip))

for i in range(2,len(bit)):
    if bit[i] == '1':
        bit[i] = '0'
    elif bit[i] == '0':
        bit[i] = '1'

print(int(''.join(bit[2:]), 2))