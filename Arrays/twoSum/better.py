def f(nums,target):
    n = len(nums)
    p = {}
    for i in range(n):
        diff = target - nums[i]
        if diff in p:
            return p[diff],i
        if diff not in p:
            p[nums[i]]=i
        

nums = [3,2,4]
target = 6
print(f(nums,target))            