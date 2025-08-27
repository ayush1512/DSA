#include <stdio.h>
int cD(int n){
    if(n == 0){
        return 0;
    }
    if(n<0){
        n = -n;
    }
    return 1 + cD(n/10);
}
int main(){
    printf("%i",cD(12312));
    return 0;
}
