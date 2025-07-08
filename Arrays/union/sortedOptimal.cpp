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
    
    vector <int> unionArr;
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }else{
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
    }
    while(j<m){
         if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
    }
    for(auto it: unionArr){
        cout << it << " ";
    }
}
    