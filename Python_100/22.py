from collections import defaultdict
freq = defaultdict(int)
ip = list(input().split())
for word in ip:
    freq[word] += 1
print(sorted(freq.items()))
# for i, (key, value) in enumerate(sorted(freq.items())):
#     print(f"{i}: {key} -> {value}")