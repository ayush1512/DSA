x = int(input())
y = int(input())
lst = []
lst1 = []
for i in range(x):
    if lst is not None:
        lst1 = []
    lst.append(lst1)
    for j in range(y):
        lst1.append(j*i)
print(lst)

# input_str = input()
# dimensions=[int(x) for x in input_str.split(',')]
# rowNum=dimensions[0]
# colNum=dimensions[1]
# multilist = [[0 for col in range(colNum)] for row in range(rowNum)]

# for row in range(rowNum):
#     for col in range(colNum):
#         multilist[row][col]= row*col

# print(multilist)