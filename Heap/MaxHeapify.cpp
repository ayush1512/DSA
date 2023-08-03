#include <iostream>
using namespace std;
void maxheapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected sub-tree
        maxheapify(arr, n, largest);
    }
}

int main(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr)/sizeof(arr[0]);
    maxheapify(arr, n, 0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}