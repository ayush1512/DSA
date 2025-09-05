#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int cnt = 0;
    printf("Enter the number: ");
    scanf("%i", &num);
    for (int i = 0; i <= sqrt(num); i++)
    {
        if (num % i == 0){
            cnt++;
        }
    }
    if(cnt > 1){
        printf("Not prime");
    }else{
        printf("Prime");
    }
}