def f(arr,k):
    n = len(arr)
    l,r = 0,0
    maxLen = 0
    sum = arr[0]
    while r < n:
        while l <= r and sum > k:
            sum -= arr[l]
            l += 1
        
        if sum == k:
            length = r - l + 1
            maxLen = max(maxLen, length)
            
        r += 1
        if r < n:
            sum += arr[r]
            
    return maxLen

arr = [10,5,7,2,1]
k = 15
print(f(arr,k))

'''
Optimal: SlidingWindow (For positive numbers)
-> Two pointers l=0 and r=0, moving towards the end from start
-> Start with the initialisation of sum = arr[0], maxLen=0(First element as the sum and maxLen zero)
-> loop while r < arr.end: 
-> loop while l <= r and sum > k: (Shrink window if sum exceeds i.e deduct the element at l from sum and incr l) sum -= arr[l], l += 1
-> if sum == k: maxLen = max(maxLen, right-left+1) #maxLen updation on after everytime while breaks upon sum == k
-> r+=1, if r < arr.end: sum+= arr[r]
'''