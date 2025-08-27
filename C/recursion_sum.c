#include <stdio.h>
int sum(int x);
int sum_iterative(int x);

int main(void)
{
    printf("%d\n", sum(50000));
    printf("%d\n", sum_iterative(50000));
    return 0;
}

int sum(int x)
{
    // printf("%i\n", x);
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return x + sum(x - 1);
    }
}

int sum_iterative(int x)
{
    int sum = 0;
    for (int i = x; i > 0; i--)
    {
        // printf("%i\n",i);
        sum += i;
    }
    return sum;
}
