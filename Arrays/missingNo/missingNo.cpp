#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int arr_sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum+=i;
        arr_sum+=arr[i];
    }
    cout << arr_sum-sum;
}