#include <stdio.h>
int power(int x, int y)
{
    if (y == 1)
    {
        return x;
    }
    return x * power(x, --y);
}
int main()
{
    printf("%d\n", power(2, 10));
    return 0;
}