def fibSum(n):
    if n == 0 or n == 1:
        return n

    return fibSum(n - 1) + fibSum(n - 2)


n = int(input())

print(fibSum(n))
