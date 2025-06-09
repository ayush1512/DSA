d = int(input())
def dec2bin(d,r):
    if d == 0:
        return r
    
    r = str(d%2) + r
    return dec2bin(d//2,r)

print(dec2bin(d,""))