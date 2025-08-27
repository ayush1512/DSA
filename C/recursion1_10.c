#include <stdio.h>

void recursion(int a);

int main(){
    recursion(10);  // Keep the passed value as 10
    return 0;
}

void recursion(int a){
    if(a == 0) return;  // Base case: stop when below 1
    recursion(a - 1);  // First make recursive call
    printf("%d\n", a); // Then print
}