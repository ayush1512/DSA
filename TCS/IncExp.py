income = int(input())
expp = {}
while True:
    print('Expenditure: ')
    exp = input()
    if exp == 'done':
        break
    print('Amount: ')
    amt = int(input())
    expp[exp] = expp.get(exp,0)+amt
spend = 0
for key,values in expp.items():
    spend += values
print(income)
print(spend)
print(f'Savings: {income-spend}')
for key, values in expp.items():
    print(key,values)