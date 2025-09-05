#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int res = 1;
    for(int i = 2; i <= n; i++)
        res *= i;
    return res;
}

// Function to calculate binomial coefficient (nCr)
int binomialCoeff(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows = 5;
    for(int i = 0; i < rows; i++) {
        // Print spaces for alignment
        for(int j = 0; j < rows - i - 1; j++)
            printf(" ");
        // Print values
        for(int k = 0; k <= i; k++)
            printf("%d ", binomialCoeff(i, k));
        printf("\n");
    }
    return 0;
}