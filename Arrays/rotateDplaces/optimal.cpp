#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr;
    int d,n;
    cin >> d;
    cin >> n;
    d = d % n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x); 
    }
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}
