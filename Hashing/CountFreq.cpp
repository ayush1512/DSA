#include <bits/stdc++.h>
using namespace std;
void freq(const vector<int>& arr, int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    for (auto x : map)
    {
        cout << x.first << ":" << x.second << endl;
    }
}

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    freq(arr, n);
    return 0;
}