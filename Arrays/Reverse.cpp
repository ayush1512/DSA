#include <iostream>
#include <vector>
using namespace std;
void Reverse(vector <int>& arr, int start, int end)
{
    int temp;
    while (start <= end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Reverse(arr,0,n-1);
}