#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    if(n<0){
        n = -n;
    }
    int m;
    m = n % 10;
    return m + sum(n/10);
}
int main(){
    printf("%i\n",sum(12312));
    return 0;
}