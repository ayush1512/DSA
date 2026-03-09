ip = list(map(int, input().split()))
if not ip:
    print(0)
else:
    max_ending = min_ending = ans = ip[0]
    for v in ip[1:]:
        if v < 0:
            max_ending, min_ending = min_ending, max_ending
        max_ending = max(v, max_ending * v)
        min_ending = min(v, min_ending * v)
        ans = max(ans, max_ending)
    print(ans)