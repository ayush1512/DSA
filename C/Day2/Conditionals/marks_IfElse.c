#include <stdio.h>
void marks()
{
    int x;
    printf("Enter the Student's Marks: ");
    scanf("%d", &x);
    if (x >= 75)
    {
        printf("A\n");
    }
    else if (x >= 60 && x < 75)
    {
        printf("B\n");
    }
    else if (x >= 40 && x < 60)
    {
        printf("C\n");
    }
    else
    {
        printf("fail\n");
    }
}
int main(){
    marks();
}