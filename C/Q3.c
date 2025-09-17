#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%i",&n);
    for(int i = 1; i <= n; i++){
        printf("%i ",i);
    }
    return 0;
}