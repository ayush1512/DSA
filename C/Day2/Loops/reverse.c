#include <stdio.h>
int main()
{
    int num;
    int rev = 0;
    printf("Enter the number: ");
    scanf("%i", &num);
    while (num != 0)
    {
        rev = rev*10 + (num % 10);
        num /= 10;
    }
    printf("%i ", rev);
}