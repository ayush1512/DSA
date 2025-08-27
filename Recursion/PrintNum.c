#include <stdio.h>
void t2B (int n){
    if(n==0){
        return;
    }else{
        printf("%i\n",n);
        t2B(n-1);
    }
}
void b2T (int n){
    if(n==0){
        return;
    }else{
        b2T(n-1);
        printf("%i\n",n);
    }
}
int main(void){
    int n;
    scanf("%i",&n);
    t2B(n);
    printf("\n");
    b2T(n);
    return 0;
}