def f(nums,target):
    n = len(nums)
    l = 0
    r = n-1
    numsi = [(num,idx) for idx, num in enumerate(nums)]
    numsi.sort()
    while l < r:
        sum = numsi[l][0] + numsi[r][0]
        if sum == target:
            return numsi[l][1],numsi[r][1]
        elif sum > target:
            r -= 1
        elif sum < target:
            l += 1
    
    return -1,-1

arr = [2,6,5,8,11]
target = 14
print(f(arr,target))