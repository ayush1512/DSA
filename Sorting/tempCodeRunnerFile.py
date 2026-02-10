    pIndex = partition(arr,low,high)
        qS(arr,low,pIndex-1)
        qS(arr,pIndex+1,high)