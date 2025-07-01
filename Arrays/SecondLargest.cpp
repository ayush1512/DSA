#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
    std::vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = arr[0];
    int max2;
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max2 = max;
            max = arr[i];
        }else if(max2 < arr[i] && max != arr[i]){
            max2 = arr[i];
        }
    }
    cout << max2;
}
