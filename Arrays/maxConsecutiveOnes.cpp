#include <bits/stdc++.h>
using namespace std;
int main(){
    int max = 0;
    int cnt = 0;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i]==1){
            cnt++;
            if(cnt>max){
                max = cnt;
            }
        }else{
            cnt = 0;
            continue;
        }
    }
    cout << max;
}