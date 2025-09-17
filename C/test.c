#include <stdio.h>
#define MAX 5
int main() {
    int stack[MAX], top = -1;
    for(int i = 1; i <= MAX; i++) {
        if(top < MAX-1) stack[++top] = i * 10;
    }
    printf("%d %d", stack[top], stack[--top]);
    return 0;
}