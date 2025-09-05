#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    printf("%i\n", gcd(21, 7));
}