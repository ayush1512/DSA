def gen(n):
    d = {}
    for i in range(1,n+1):
        # if i == 0:
        #     continue
        d[i] = i*i
    return d
n = int(input("Enter Number: "))
print(gen(n))