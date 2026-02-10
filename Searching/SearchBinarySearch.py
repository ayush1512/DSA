import random as r

# # Recursive binary search implementation
# def search(nums, target) -> int:
#     # Inner recursive function that searches between left and right indices
#     def binary_search(left, right):
#         # Base case: if left pointer exceeds right pointer, target not found
#         if left > right:
#             return -1
        
#         # Calculate middle index to avoid overflow
#         mid = (left + right) // 2
        
#         # If middle element matches target, return its index
#         if nums[mid] == target:
#             return mid
#         # If middle element is greater than target, search left half
#         elif nums[mid] > target:
#             return binary_search(left, mid - 1)
#         # If middle element is less than target, search right half
#         else:
#             return binary_search(mid + 1, right)
    
#     # Start recursive search from first to last index
#     return binary_search(0, len(nums) - 1)

# Iterative binary search implementation
def search_iterative(nums, target: int) -> int:
    # Initialize left pointer at start and right pointer at end
    left, right = 0, len(nums) - 1
    
    # Continue searching while left pointer doesn't exceed right pointer
    while left <= right:
        # Calculate middle index
        mid = (left + right) // 2
        
        # If middle element matches target, return its index
        if nums[mid] == target:
            return mid
        # If middle element is less than target, search right half
        elif nums[mid] < target:
            left = mid + 1
        # If middle element is greater than target, search left half
        else:
            right = mid - 1
    
    # Target not found in array, return -1
    return -1

# Generate list of 10 random integers between 1 and 10
nums = [r.randint(1, 10) for _ in range(0, 10)]
# Sort the list in ascending order
nums.sort()
# Print the sorted list
print(nums)
# Search for target value 9 and print the result
print(search_iterative(nums, 9))