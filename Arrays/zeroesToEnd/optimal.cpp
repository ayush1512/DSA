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
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    for(int i = j+1; i < n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}
