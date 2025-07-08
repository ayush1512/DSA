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
    vector <int> temp;
    for(int i = 0; i < d; i++){
        temp.push_back(arr[i]);
    }
    for(int i = d; i < n; i++){
        arr[i-d] = arr[i];
    }
    int j = 0;
    for(int i = n-d; i < n; i++){
        arr[i] = temp[j];
        j++;
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}
