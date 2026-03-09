nums = list(map(int,input().split()))

def nextPerm():
    index = -1
    for i in range(len(nums)-2,-1,-1):
        if nums[i] < nums[i+1]:
            index = i
            break

    if index == -1:
        nums.reverse()
        return nums

    for i in range(len(nums)-1,index,-1):
        if nums[i] > nums[index]:
            nums[i],nums[index] = nums[index],nums[i]
            
    nums[index + 1:] = reversed(nums[index + 1:])
    return nums

ans = nextPerm
print(ans)


    