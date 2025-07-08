#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr1;
    vector<int> arr2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    // sort(arr1.begin(),arr1.end());
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    // sort(arr2.begin(),arr2.end());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i] << " ";
            }
        }
    }    

}
    