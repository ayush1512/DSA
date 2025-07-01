#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int n;
    cin >> n;
    std::vector < int > arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    // for (int i = 0; i < arr.size()-1; i++) {
    //     if (arr[i] == arr[i + 1]) {
    //         arr.erase(arr.begin() + (i + 1));
    //     }
    // }
    int i = 0;
    for(int j = 0; j < n; j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    for (auto it: arr) {
        cout << it << " ";
    }
}