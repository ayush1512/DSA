#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector < int > arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Insertion Sort
    for (int i = 0; i < n; i++) {
        int j = i;
        while(j > 0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for (auto it: arr)
    {
        cout << it << " ";
    }
    cout << endl;
}