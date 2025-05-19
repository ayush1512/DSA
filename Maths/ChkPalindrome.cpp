#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
    long long reverse{};
    int temp;
    temp = x;
    while (x != 0)
    {
        int lastdigit = x % 10;
        reverse = reverse * 10 + lastdigit;
        x = x / 10;
    }
    if (temp == reverse)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t = 2;
    while (t--)
    {
        int x;
        cin >> x;
        cout << isPalindrome(x);
    }
}