#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x); 
    }
    vector <int> temp;
    for(int i = 0; i < n; i++){
        if(arr[i]>0) temp.push_back(arr[i]);
    }
    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
        if(!temp[i]) arr[i] = 0;
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    
}
        