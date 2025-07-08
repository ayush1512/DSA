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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(arr1[i]);
        st.insert(arr2[i]);
    }
    for(auto it: st){
        cout << it << " ";
    }
}