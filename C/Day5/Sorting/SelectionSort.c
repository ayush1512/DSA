#include <stdio.h>
int main()
{
    int arr[10] = {2, 3, 9, 6, 7, 1, 8, 4, 10, 5};
    for (int i = 0; i < 9; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        arr[i] = arr[i] + arr[min_idx];
        arr[min_idx] = arr[i] - arr[min_idx];
        arr[i] = arr[i] - arr[min_idx];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i ", arr[i]);
    }
    return 0;
}