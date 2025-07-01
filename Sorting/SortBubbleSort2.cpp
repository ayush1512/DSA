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
   // Optimized Bubble Sort Algorithm
   for (int i = n - 1; i >= 0; i--)
   {
      bool swapped = false;
      for (int j = 0; j <= i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            swap(arr[j], arr[j + 1]);
            swapped = true;
         }
      }
      // If no swapping occurred, array is already sorted
      if (!swapped)
         break;
   }
   for (auto it : arr)
   {
      cout << it << " ";
   }
   cout << endl;
}