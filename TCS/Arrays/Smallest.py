ip = list(map(int,input().split()))
print(min(ip))

# m = ip[0]

# for i in ip:
#     if i < m:
#         m = i
#     else:
#         continue

# print(m)


'''
# Time Complexities

**Method 1 (using `min()`):**
- **Time Complexity: O(n)** - The built-in `min()` function iterates through all n elements once to find the minimum.

**Method 2 (commented loop):**
- **Time Complexity: O(n)** - The for loop iterates through all n elements once, comparing each with the current minimum.

Both methods have the same time complexity since they both need to examine every element in the list. The `min()` function is generally preferred as it's more concise and optimized at the C level.

'''