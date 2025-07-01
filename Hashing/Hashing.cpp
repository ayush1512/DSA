#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number of test cases: ";
    cin >> q;
    while(q--){
        int number;
        cout << "Number: ";
        cin >> number;
        //fetch
        cout << "Count: " << hash[number] << endl;
    }
    return 0;
}