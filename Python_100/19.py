# Program to sort (name, age, height) tuples by name, then age, then height

# Read input from console
# tuples = []
# while True:
#     try:
#         line = input()
#         if not line:
#             break
#         tuples.append(tuple(line.split(',')))
#     except EOFError:
#         break

# # Sort by name, then age, then height
# sorted_tuples = sorted(tuples, key=lambda x: (x[0], int(x[1]), int(x[2])))

# print(sorted_tuples)

ip = list(map(lambda x: tuple(x.split(',')),input().split()))
print(ip)