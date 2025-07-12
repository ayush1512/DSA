#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    int k, n;
    cin >> k >> n;
    if(n == 0) return 0;
    k = k % n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x); 
    }
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
    for(int num : nums){
        cout << num << " ";
    }
}
