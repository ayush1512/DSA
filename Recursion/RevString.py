def revString(s):
    if s == "":
        return ""
    
    return revString(s[1::1]) + s[0]
def main():
    s = input()
    print(revString(s))

main()