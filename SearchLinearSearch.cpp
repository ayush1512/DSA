#include <iostream>
using namespace std;
int main() {
   int search, c, n=6;
   int arr[] = { 12, 35, 69, 74, 165, 54};
   search=165;
   for (c = 0; c < n; c++) {
      if (arr[c] == search) {
         printf("%d is present at location %d.\n", search, c+1);
         break;
      }
   }
   if (c == n)
      printf("%d isn't present in the array.\n", search);
   return 0;
}

/*repeat for i=1 to n
if(item==a[i]) then
print: item found at i
return(end of if)
(end of for loop)
if(i>n) then print
item doesn't exist
(end of if)
exit*/