#include <iostream>
using namespace std;
// int binarySearch(int arr[], int p, int r, int num)
// {
//    if (p <= r)
//    {
//       int mid = (p + r) / 2;
//       if (arr[mid] == num)
//          return mid;
//       if (arr[mid] > num)
//          return binarySearch(arr, p, mid - 1, num);
//       if (arr[mid] < num)
//          return binarySearch(arr, mid + 1, r, num);
//    }
//    return -1;
// }
int binarySearch(int arr[], int p, int r, int num)
{
   if (p > r)
   {
      return -1;
   }
   else
   {
      while (p <= r)
      {
         int mid = (p + r) / 2;
         if (arr[mid] == num)
         {
            return mid;
         }
         else if (arr[mid] > num)
         {
            r = mid - 1;
         }
         else
         {
            p = mid + 1;
         }
      }
   }
}
int main(void)
{
   int arr[] = {-1, 0, 3, 5, 9, 12};
   int n = sizeof(arr) / sizeof(arr[0]);
   int num;
   cout << "Enter the number to search: \n";
   cin >> num;
   int index = binarySearch(arr, 0, n - 1, num);
   if (index == -1)
   {
      cout << num << " is not present in the array";
   }
   else
   {
      cout << num << " is present at index " << index << " in the array";
   }
   return 0;
}

/*Procedure binary_search
   A ← sorted array
   n ← size of array
   x ← value to be searched

   Set lowerBound = 1
   Set upperBound = n

   while x not found
      if upperBound < lowerBound
         EXIT: x does not exists.

      set midPoint = lowerBound + ( upperBound - lowerBound ) / 2

      if A[midPoint] < x
         set lowerBound = midPoint + 1

      if A[midPoint] > x
         set upperBound = midPoint - 1

      if A[midPoint] = x
         EXIT: x found at location midPoint
   end while

end procedure*/