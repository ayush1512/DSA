#include <stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int sum = 0;
    while(num>0){
        sum = sum + (num % 10);
        num /= 10;
    }
    printf("%i\n",sum);
}