#include <stdio.h>
int fib(int n){
    printf("%i\n",n);
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
int main(void){
    int n;
    scanf("%i",&n);
    printf("%i\n",fib(n));
}