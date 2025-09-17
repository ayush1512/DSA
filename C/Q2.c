#include <stdio.h>
int search(int *arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
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
int main()
{
    int n;
    int arr[10];
    printf("Enter the no. of elements: ");
    scanf("%i", &n);
    printf("Enter the sorted array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }
    int x;
    printf("Enter the element to be searched: ");
    scanf("%i", &x);
    int result = search(arr, n, x);
    printf(result == -1 ? "Element not found" : "Element found at index %d", result);
}