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
   // Selection Sort Algorithm
   for (int i = 0; i < arr.size() - 1; i++)
   {
      int min_idx = i; // Find index of minimum element
      for (int j = i + 1; j < arr.size(); j++)
      {
         if (arr[j] < arr[min_idx])
         {
            min_idx = j;
         }
      }
      // Swap only if minimum element is not at current position
      if (min_idx != i)
      {
         swap(arr[i], arr[min_idx]);
      }
   }
   for (auto it : arr)
   {
      cout << it << " ";
   }
   cout << endl;
}