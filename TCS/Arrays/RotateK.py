# ip = list(map(int,input().split()))
# n = len(ip)
# k = int(input()) % n
# rr = len(ip)-k
# lr = k
# resl = []
# resr = []
# l = 0 
# while rr < n:
#     resr.append(ip[rr])
#     rr+=1
# while l < n-k:
#     resr.append(ip[l])
#     l+=1
# while k < n:
#     resl.append(ip[k])
#     k+=1
# while l < lr:
#     resl.append(ip[l])
#     l+=1
# print(resr)
# print(resl)


ip = list(map(int, input().split()))
n = len(ip)
if n == 0:
    print([])
else:
    k = int(input()) % n
    resr = ip[-k:] + ip[:-k]  # works for k == 0 as well
    resl = ip[k:] + ip[:k]  # works for k == 0 as well
    print(resr)
    print(resl)

# ip = list(map(int, input().split()))
# n = len(ip)
# if n == 0:
#     print([])
# else:
#     k = int(input()) % n
#     def rev(a, i, j):
#         while i < j:
#             a[i], a[j] = a[j], a[i]
#             i += 1
#             j -= 1
#     rev(ip, 0, n-1)
#     rev(ip, 0, k-1)
#     rev(ip, k, n-1)
#     print(ip)