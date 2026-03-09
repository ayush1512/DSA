# from typing import List
# class Solution:
#     def mSub(self, nums: List[int]) -> int:
#         s = 0
#         mS = float('-inf')
#         for i in nums:
#             s += i
#             if s > mS:
#                 mS = s
#             if s < 0:
#                 s = 0
#         return mS

from typing import List
class Solution:
    def mSub(self, nums):
        s = 0
        ansS, ansE = -1,-1
        mS = float('-inf')
        for i in range(len(nums)):
            if s == 0:
                start = i
            s += nums[i]
            if s > mS:
                mS = s
                ansS,ansE = start,i
            if s < 0:
                s = 0
        return ansS,ansE
        
               
sol = Solution()
arr = [-2,1,-3,4,-1,2,1,-5,4]
# arr = [-2,1]
ans = sol.mSub(arr)
print(ans)

'''
Use of curr_sum and max_sum
-> curr_sum = 0, max_sum = float('-inf')
-> loop: Traverse all elements
-> curr_sum += i
-> if curr_sum > max_sum: max_sum = curr_sum
-> if curr_sum < 0: s = 0
-> return max_sum
'''

'''
-> Printing the start and end range
-> init two ptr ansS, ansE = -1,-1
-> After loop starts, if curr_sum == 0:
start = i # The start of subarray
-> In, if max_sum < curr_sum: 
assign the ansS = start and ansE = i # Start idx and last idx 
'''
