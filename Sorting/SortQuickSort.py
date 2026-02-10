import random
import time
def qS(arr,low,high):
    if low<high: # Base Case
        pIndex = partition(arr,low,high) 
        qS(arr,low,pIndex-1) # Left Half
        qS(arr,pIndex+1,high) # Right Half
        
def partition(arr,low,high):
    pivot = arr[low] # First Element as pivot
    i = low 
    j = high
    while i < j:
        # Move i to the right until an element > pivot is found
        while i <= high - 1 and arr[i] <= pivot:
            i += 1
        # Move j to the left until an element <= pivot is found
        while j >= low + 1 and arr[j] > pivot:
            j -= 1
        
        if i < j:
            arr[i], arr[j] = arr[j], arr[i]
            
    # Swap the pivot element (at low) with the element at j
    arr[low], arr[j] = arr[j], arr[low]
    return j
    
arr = [random.randint(0,10) for _ in range(0,1000)]
# print(arr)
curr = time.time()
qS(arr,0,len(arr)-1)
t = time.time() - curr
# print(arr)
print(f'{t*1000:.2f}','ms')

'''
def partition():
    After picking pivot take i++ and j-- on both ends
    From i check if arr[i] > pivot STOP
    From j check if arr[j] < pivot STOP
    SWAP(i,j)
    Repeat until pointers crosses
    SWAP(pivot,i)
'''
'''
Concept: Low and High pointers, no new structures needed

def qS():
    1). Pivot (Pick and place in its right place): 
        1. 1st Element 
        2. Last Element
        3. Median
        4. Random

    2). Smaller on left and Larger on right

    3). Repeat Above Steps
'''