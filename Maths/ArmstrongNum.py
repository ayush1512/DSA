num = int(input("Enter the number: "))
sum_ = 0
temp = num 

while num!=0:
    ld = num%10
    # sum = sum + ld ** 3 
    # n = n/10
    sum_ += ld ** 3 
    num //= 10

if temp == sum_:
    print("Yes")
else:
    print("No") 