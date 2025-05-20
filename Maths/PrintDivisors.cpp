#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 2;
    while (t--)
    {
        int n;
        cin >> n;
        // for (int i = 1; i <= n; i++)
        // {
        //     if (n % i == 0)
        //         cout << i << " ";
        // }
        // cout << endl;
        vector <int> ls;
        // O(sqrt(n))
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                ls.push_back(i);
                if(n/i!=i){
                    ls.push_back(n/i);
                }
            }
        }
        // O(n log(i))
        sort(ls.begin(),ls.end());
        for(auto it : ls)cout << it << " ";
    }
}