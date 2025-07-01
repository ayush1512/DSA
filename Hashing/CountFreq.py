def countFreq(arr,n):
    mp = {}
    for i in range(n):
        if arr[i] in mp:
            mp[arr[i]] += 1
        else: 
            mp[arr[i]] = 1
    for x in mp:
        print(x,mp[x])

if __name__ == '__main__':
    arr = list(map(int, input().split()))
    n = len(arr)
    countFreq(arr, n)
    