#include <stdio.h>
int forLoop(int num)
{
    int result = 1;
    for (int i = num; i > 0; i--)
    {
        result *= i;
    }
    return result;
}
int whileLoop(int num)
{
    int result = 1;
    while (num != 0)
    {
        result *= num;
        num--;
    }
    return result;
}
int main()
{   
    int num;
    printf("Enter the number: ");
    scanf("%i", &num);
    printf("%i\n",forLoop(num));
    printf("%i\n",whileLoop(num));
    
}