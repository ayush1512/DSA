#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 2;
    while (t--)
    {
        int n;
        int count = 0;
        vector<int> ls;
        cin >> n;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                count++;
                if (n / i != i)
                {
                    count++;
                }
            }
        }if(count==2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}