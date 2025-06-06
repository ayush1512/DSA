#include <bits/stdc++.h>
using namespace std;
int main(){
    int prev = 0, curr = 1;
    cout << prev << " "; // Print first Fibonacci number
    
    for(int i = 1; i < 100; i++){
        cout << curr << " ";
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return 0;
}