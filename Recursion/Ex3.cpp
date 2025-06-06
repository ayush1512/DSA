#include <bits/stdc++.h>
using namespace std;

// Function to print 1 to n using backtracking
void printNumbers(int i, int n) {
    // Base case: if i == 0, return
    if (i == 0) {
        return;
    }
    
    // Recursive case: first go to previous number
    printNumbers(i-1, n);
    
    // While returning (backtracking), print current number
    cout << i << " ";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    // Start from n, backtrack to print 1 to n
    printNumbers(n, n);
    cout << endl;
    
    return 0;
}