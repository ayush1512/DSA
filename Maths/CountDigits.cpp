#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int count=(int)(log10(n)+1);
        // while (n > 0)
        // {
        //     // int ld;
        //     // ld = n % 10;
        //     // cout << ld << " ";
        //     count++;
        //     n = n / 10;
        // }
        cout << count;
    }
}