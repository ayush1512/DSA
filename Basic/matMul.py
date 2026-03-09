# mat_a = [[1, 2], [3, 4]]
# mat_b = [[5, 6], [7, 8]]
# res = [[0, 0], [0, 0]]

# for i in range(len(mat_a)):
#     for j in range(len(mat_b[0])):
#         for k in range(len(mat_b)):
#             res[i][j] += mat_a[i][k] * mat_b[k][j]

# print(res)

A = [[12,7,3],
     [4,5,6],
     [7,8,9]]

B = [[5,8,1,2],
     [6,7,3,0],
     [4,5,9,1]]

Bt = list(zip(*B))
r = [[sum(a*b for a,b in zip(row, col)) for col in Bt] for row in A]

for row in r:
    print(row)