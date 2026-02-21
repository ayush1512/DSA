def f(arr,k):
    n = len(arr)
    p = {0:-1}
    sum = 0
    maxLen = 0 
    for i in range(n):
        sum += arr[i]
        
        if (sum-k) in p:
            length = i - p[sum-k]
            maxLen = max(maxLen,length)
            
        if (sum-k) not in p:
            p[sum-k] = i
            
    return maxLen

arr = [1,2,-1,1,1]
k = 3
print(f(arr,k))

'''
Optimal: Prefixsum with Hashmap (For any longest subarr)
-> dict init prefix_map = {0:-1} #
-> init curr_sum = 0, max_len = 0
-> for I in range(len(arr)) #loop traverse elements
-> curr_sum= arr[i]
-> if (curr_sum - k) in dict: length = i - dict(curr_sum-k), max_len = max(max_len, length) #Subarray Check
-> if (curr_sum - k) not in dict: dict[curr_sum] = i #Add the sum not in dict
-> return maxlen
'''