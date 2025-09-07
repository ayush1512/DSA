#include <stdio.h>
int sum(int n){
    printf("%i\n",n);
    if(n==0){
        return 1;
    }else{
        return n * sum(n-1);
    }
}
int main(void){
    int n;
    scanf("%i",&n);
    printf("%i\n",sum(n));
    return 0;
}