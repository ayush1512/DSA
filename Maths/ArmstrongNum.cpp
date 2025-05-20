// if n = 371, 3^3+7^3+1^3 = 371

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 2;
    while (t--)
    {
        int n, sum=0;
        cin >> n;
        int dup = n;
        while (n != 0)
        {
            int ld = n % 10;
            sum = sum + ld * ld * ld;
            n = n / 10;
        }
        if(dup == sum){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}