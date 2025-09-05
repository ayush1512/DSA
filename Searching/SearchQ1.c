#include <stdio.h>
int search(int *arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            printf("%i\n", i);
        }
    }
    return n;
}
int main()
{
    int a[5] = {1, 3, 5, 2, 5};
    if (search(a,5,4)==sizeof(a)/sizeof(a[0]))
    {
        printf("Not found");
    }
    return 0;
}