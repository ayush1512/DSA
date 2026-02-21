import random
import time
import ast
def mergeSort(arr, l, r):
    if l >= r:
        return
    m = (l+r)//2
    mergeSort(arr,l,m)
    mergeSort(arr,m+1,r)
    merge(arr,l,m,r)
    
def merge(arr,l,m,r):
    temp = []
    left = l
    right = m+1
    while(left <= m and right <= r):
        if arr[left] <= arr[right]:
            temp.append(arr[left])
            left+=1
        else:
            temp.append(arr[right])
            right+=1
    while(left <= m):
        temp.append(arr[left])
        left+=1
    while(right <= r):
        temp.append(arr[right])
        right+=1
    for i in range(l,r+1):
        arr[i] = temp[i-l]


# arr = [random.randint(0, 16) for x in range(0, 16)]
arr = ast.literal_eval(open('tc.txt').read())
# print(arr)
curr = time.time()
mergeSort(arr, 0, len(arr)-1)
t = (time.time()-curr) * 1000
# print(arr)
print(f"{t:.2f} ms")

''' 
def mergeSort(arr, low, high):
    O(logN)
    Base Case
    if low >= high:
        return
    mid = (low+high)//2
    mergeSort(arr, low, mid) // Left Halve
    mergeSort(arr, mid+1, high) // Right Halve
    merge(arr, low, mid, high)  // Merging
    
def merge(arr, low, mid, high):
    O(N)
    temp = [] // Empty structure for holding the sorted output
    Two pointers for each half starting 
    l = low
    r = mid+1
    while(l <= mid and r <= high):
        if arr[l] <= arr[r]:
            temp.append(arr[l])
            l+=1 // Incr l pointer
        else:
            temp.append(arr[r])
            r+=1 // Incr r pointer
        // Inserting elements after comparing
    // Inserting remaining elements from either list which is left since while returns on anyone halve's completion
    while(l<=mid):
        temp.append(arr[l])
        l+=1    
    while(r<=high):
        temp.append(arr[r])
        r+=1
    // At last updating the array with the sorted values
    for i in range(low,high+1):
        arr[i] = temp[i-low] // i-low for setting the right index while updating     

    Complexity = O(N*logN)
'''