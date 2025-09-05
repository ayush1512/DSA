#include <stdio.h>
int main()
{
    int a = 0, b = 1, n;
    printf("Enter the n terms: ");
    scanf("%i", &n);
    printf("%i %i ", a, b);
    for (int i = 0; i < n; i++)
    {
        int temp;
        temp = b;
        b = b + a;
        a = temp;
        printf("%i ", b);
    }
    return 0;
}