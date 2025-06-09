def mergeSort(data, start, end):
    if start < end:
        mid = (start + mid) / 2
        mergeSort(data, start, mid)
        mergeSort(data, mid + 1, end)
        merge(data, start, mid, end)

def merge(data, start, mid, end):
    temp = [] * (end-start+1)

    i = start, j = mid + 1, k = 0
    
    while i <= mid and j <= end:
        if data[i] <= data[j]:
            temp[k+1] = data[i+1]
        else:
            temp[k+1] = data[j+1]