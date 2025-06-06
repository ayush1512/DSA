#include <bits/stdc++.h>
using namespace std;
void f(int n)
{
    n--;
    cout << n << endl;
    if (n > 1)
        f(n);
}
int main()
{
    int n;
    cin >> n;
    f(n);
}