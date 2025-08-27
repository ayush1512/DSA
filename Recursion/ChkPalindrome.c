#include <stdio.h>
#include <stdbool.h>
int rev(int n, int temp);
int chk(int n);
int main(){
    printf("%s",chk(1010) ? "true" : "false");
    return 0;
}
int rev(int n, int temp) {
    if (n == 0) {
        return temp;
    }
    if (n < 0) {
        n = -n;
    }
    temp = (temp * 10) + (n % 10);
    return rev(n/10, temp);
}
int chk(int n){
    if(n == rev(n,0)){
        return 1;
    }else{
        return 0;
    }
}