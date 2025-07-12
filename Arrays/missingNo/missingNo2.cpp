#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int hash[n+1] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }
    for(int i = 1; i < n; i++){
        if(hash[i]==0){
        cout << i;
        break;
        }
    }
}