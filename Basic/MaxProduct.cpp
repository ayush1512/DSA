#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr= {4,10,2,4};
    sort(arr.begin(),arr.end());
    cout << arr[arr.size()-1] * arr[arr.size()-2];
}