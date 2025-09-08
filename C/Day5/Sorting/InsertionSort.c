#include <stdio.h>
int main()
{
    int arr[10] = {2, 3, 9, 6, 7, 1, 8, 4, 10, 5};
    for (int i = 0; i < 10; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
        for (int i = 0; i < 10; i++)
    {
        printf("%i ", arr[i]);
    }
    return 0;
}