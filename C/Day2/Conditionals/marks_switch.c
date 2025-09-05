#include <stdio.h>
void marks()
{
    int x;
    printf("Enter the marks: ");
        scanf("%d", &x);
    switch (x)
    {
    case 75 ... 100:
        /* code */
        printf("A\n");
        break;

    case 60 ... 74:
        printf("B\n");
        break;

    case 40 ... 59:
        printf("C\n");
        break;

    default:
        printf("fail\n");
        break;
    }
}
int main(){
    marks();
}