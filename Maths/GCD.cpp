#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 2;
    while (t--)
    {
        // int m, n;
        int gcd = 0;
        // cin >> m >> n;
        // for (int i = 1; i <= min(m, n); i++)
        // {
        //     if (m % i == 0 && n % i == 0)
        //     {
        //         gcd = i;
        //     }
        // }

        // for(int i=min(m,n);i>=1;i--){
        //     if (m % i == 0 && n % i == 0)
        //     {
        //         gcd = i;
        //         break;
        //     }
        // }
        
        int a, b;
        cin >> a >> b;
        while (a > 0 && b > 0)
        {
            if (a > b)
            {
                a = a % b;
            }
            else
            {
                b = b % a;
            }
            if (a == 0)
                gcd = b;
            else
                gcd = a;
        }
        cout << gcd << endl;
    }
}