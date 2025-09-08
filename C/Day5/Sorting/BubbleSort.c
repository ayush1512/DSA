#include <stdio.h>
int main()
{
    int arr[10] = {2, 3, 9, 6, 7, 1, 8, 4, 10, 5};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
                // 10,20 30,20 30,10 20,10
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", arr[i]);
    }
    return 0;
}