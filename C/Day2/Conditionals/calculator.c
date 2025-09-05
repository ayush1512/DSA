#include <stdio.h>
void calc()
{
    char op;
    int x, y;
    printf("Enter operation: ");
    scanf("%c", &op);
    printf("Enter the numbers: ");
    scanf("%i %i", &x, &y);
    printf("The result is: ");
    switch (op)
    {
    case '+':
        printf("%i\n", x + y);
        break;
    case '-':
        printf("%i\n", x - y);
        break;
    case '/':
        printf("%i\n", x / y);
        break;
    case '*':
        printf("%i\n", x * y);
        break;
    }
}
int main()
{
    calc();
}