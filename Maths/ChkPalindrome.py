def is_palindrome(x):
    rev = 0
    temp = x
    while x != 0:
        ld = x % 10 
        rev = rev * 10 + ld
        x //= 10
    return temp == rev

for _ in range(2):
    x = int(input("Enter the nummber: "))
    print("The result is: ",bool(is_palindrome(x)))