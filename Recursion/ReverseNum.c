#include <stdio.h>

int rev_h(int n, int temp) {
    if (n == 0) {
        return temp;
    }
    if (n < 0) {
        n = -n;
    }
    temp = (temp * 10) + (n % 10);
    return rev_h(n/10, temp);
}

int rev(int n){
    return rev_h(n,0);
}

int main() {
    printf("%i\n",rev(4315));
    return 0;
}