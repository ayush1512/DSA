#include <stdio.h>
int search(int *arr, int start, int end, int x)
{
    if (start >= end)
        return 0;
        
    int mid = (start + end) / 2;
    int count = 0;
    
    if (arr[mid] == x)
    {
        count = 1;
        count += search(arr, start, mid, x);
        count += search(arr, mid + 1, end, x);
    }
    else if (arr[mid] < x)
    {
        count = search(arr, mid + 1, end, x);
    }
    else
    {
        count = search(arr, start, mid, x);
    }
    return count;
}
int main()
{
    int n, arr[10];
    printf("Enter the number of elements: ");
    scanf("%i", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }

    int x;
    printf("Enter the element to be searched: ");
    scanf("%i", &x);

    printf("Count: %i\n", search(arr, 0, n-1, x));
}
