#include <stdio.h>
int main(){
    int i = 1;
    start:
        if(i <= 10){
            printf("%i ",i);
            i++;
            goto start;
        }
    return 0;
}