def bSearch(A, left, right, x):
    if left > right:
        return -1

    mid = (left + right) // 2

    if x == A[mid]:
        return mid

    if x < A[mid]:
        return bSearch(A, left, mid - 1, x)

    return bSearch(A, mid + 1, right, x)


print(bSearch([1, 2, 3, 4, 7, 8, 10, 12], 1, 12, 8))
