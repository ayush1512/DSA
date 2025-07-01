#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
    std::vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++){
        if(arr[i]<=arr[i+1]){
            continue;
        }else{
            cout << "Not ";
            break;
        }
    }
    cout << "Sorted";
}
