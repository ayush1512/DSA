#include <bits/stdc++.h>
using namespace std;

// Function to print n to 1 using backtracking
void printNumbers(int i, int n) {
    // Base case: if i > n, return
    if (i > n) {
        return;
    }
    
    // Recursive case: first go to the end of recursion stack (i=n)
    printNumbers(i+1, n);
    
    // While returning (backtracking), print in reverse order (n to 1)
    cout << i << " ";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    // Start from 1, backtrack to print n to 1
    printNumbers(1, n);
    cout << endl;
    
    return 0;
}