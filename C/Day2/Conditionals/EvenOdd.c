#include <stdio.h>
void evenOdd(int x){
    if(x % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
}
int main(void){
    evenOdd(5);
}