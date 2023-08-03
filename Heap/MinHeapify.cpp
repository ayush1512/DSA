#include <iostream>
using namespace std;
void minheapify(int arr[], int n, int i)
{
    int smallest = i; // Initialize smallest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2
    // If left child is smaller than root
    if (l < n && arr[l] < arr[smallest])
        smallest = l;
    // If right child is smaller than smallest so far
    if (r < n && arr[r] < arr[smallest])
        smallest = r;
    // If smallest is not root
    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        // Recursively heapify the affected sub-tree
        minheapify(arr, n, smallest);
    }
}

int main(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr)/sizeof(arr[0]);
    minheapify(arr, n, 0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}