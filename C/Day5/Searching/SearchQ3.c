#include <stdio.h>
int search(int *arr, int start, int end, int x)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
        {
            return search(arr, mid + 1, end, x);
        }
        else
        {
            return search(arr, start, mid - 1, x);
        }
    }
    return -1;
}
int main(){
    int n, arr[10];
    printf("Enter the number of elements: ");
    scanf("%i",&n);

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%i",&arr[i]);
    }

    int x;
    printf("Enter the element to be searched: ");
    scanf("%i",&x);
    
    printf("At position: %i\n",search(arr,0,n-1,x)+1);
}