def f(nums,k):
    n = len(nums)
    
    for i in range(n):
        for j in range(i+1,n):
            if nums[i] + nums[j] == k:
                return i,j
            else:
                continue
            
nums = [2,7,11,15]
k = 9
print(f(nums,k))