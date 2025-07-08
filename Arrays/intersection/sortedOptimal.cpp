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
    sort(arr1.begin(),arr1.end());
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    sort(arr2.begin(),arr2.end());
    
    vector <int> intArr;
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]) i++;
        else if(arr1[i] > arr2[j]) j++;
        else{
            intArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(auto it: intArr){
        cout << it << " ";
    }
}
    