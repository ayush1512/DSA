def rev(A):
    if len(A) == 0:
        return []
    return rev(A[1:]) + [A[0]]

A = list(map(int, input().split()))
print(rev(A))