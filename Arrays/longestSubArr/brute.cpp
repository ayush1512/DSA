#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, k;
    cin >> n;
    vector < int > arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    int len = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[j];
            if (sum == k) {
                len = max(len, j - i + 1);
            }
        }
    }
    cout << len << endl;
}