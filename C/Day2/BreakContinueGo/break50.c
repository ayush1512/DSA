#include <stdio.h>
int main(){
    for(int i = 0; i < 100; i++){
        if(i ==50){
            break;
        }
        printf("%i ",i);
    }
    return 0;
}