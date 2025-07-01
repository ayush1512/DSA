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
    int min = arr[0];
    int smin = INT_MAX;
    for(int i = 0; i < n;i++){
        if(min > arr[i]){
            min = arr[i];
            smin = min;
        }else if(smin > arr[i] && min != arr[i]){
            smin = arr[i];
        }
    }
    cout << smin;
}
