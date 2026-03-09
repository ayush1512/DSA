def dup(n):
    n = str(n)
    s = set(n)
    if len(s) == len(n):
        return 1
    else:
        return 0
    
m = int(input())
n = int(input())
cnt = 0
for i in range(m,n+1):
    cnt+=dup(i)

print(cnt)

# from functools import lru_cache

# def count_unique_upto(x: int) -> int:
#     """Count numbers in [0, x] with all unique digits."""
#     if x < 0:
#         return 0

#     s = str(x)

#     @lru_cache(maxsize=None)
#     def dp(pos: int, mask: int, tight: int, started: int) -> int:
#         if pos == len(s):
#             # Count 0 as valid (when never started), same as brute-force behavior.
#             return 1

#         limit = int(s[pos]) if tight else 9
#         total = 0

#         for d in range(limit + 1):
#             ntight = 1 if (tight and d == limit) else 0

#             if not started and d == 0:
#                 # still leading zeros, digit not used yet
#                 total += dp(pos + 1, mask, ntight, 0)
#             else:
#                 bit = 1 << d
#                 if mask & bit:
#                     continue  # repeated digit
#                 total += dp(pos + 1, mask | bit, ntight, 1)

#         return total

#     return dp(0, 0, 1, 0)

# m = int(input().strip())
# n = int(input().strip())

# if m > n:
#     m, n = n, m

# # Count in [m, n] = count[0..n] - count[0..m-1]
# print(count_unique_upto(n) - count_unique_upto(m - 1))
