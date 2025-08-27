#include <stdio.h>
int fact(int x);

int main(void){
    printf("%d\n", fact(10));
    return 0;
}

int fact(int x){
    printf("%i\n",x);
    if(x==1){
        return 1;
    }else{
        return x * fact(x-1);
    }
}
