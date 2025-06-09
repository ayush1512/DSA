#include <bits/stdc++.h>
using namespace std;
int main()
{
    int prev = 0, curr = 1;
    cout << prev << " "; // Print first Fibonacci number

    for (int i = 1; i < 100; i++)
    {
        cout << curr << " ";
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return 0;

    int fib(int n)
    {
        if (n <= 1)
            return n;
        int a = 0, b = 1, temp;
        for (int i = 0; i < n - 1; i++)
        {
            temp = a;
            a = b;
            b = temp + b;
        }
        return b;
    }
}