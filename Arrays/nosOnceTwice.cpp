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
    unordered_map <int,int> um;
    set <int> st;
    set <int> st2;
    for(int i = 0;i < n; i++){
        um[arr[i]]++;
    }
    for(const auto& pair: um){
        if(pair.second == 1){
            st.insert(pair.first);
        }else if(pair.second == 2){
            st2.insert(pair.first);
        }
    }
    cout << "Nos. appearing once: ";
    for(auto it: st){
        cout << it << " ";
    }
    cout << endl;
    cout << "Nos. appearing twice: ";
    for(auto it: st2){
        cout << it << " ";
    }
}