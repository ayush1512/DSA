#include <stdio.h>
void evenOdd()
{
    int x, y, z;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
    {
        if (x > z)
        {
            printf("%d is the largest\n", x);
        }
        else
        {
            printf("%d is the largest\n", z);
        }
    }
    else
    {
        if (y > z)
        {
            printf("%d is the largest\n", y);
        }
        else
        {
            printf("%d is the largest\n", z);
        }
    }
}
int main()
{
    evenOdd();
}