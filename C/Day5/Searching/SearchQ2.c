#include <stdio.h>
int search(int *arr, int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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
    
    printf("At position: %i\n",search(arr,n,x)+1);
}