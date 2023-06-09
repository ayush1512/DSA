#include <iostream>
using namespace std;
void TOH(int n,char src,char aux,char dest){
    static int count = 0;
    if(n==1){
        count++;
        cout << count << ". Move disk " << n << " from " << src << " to " << dest << endl;
        return; // base case
        
    }
    TOH(n-1,src,dest,aux); // Source, Destination, Auxillary
    count++;
    cout << count << ". Move disk " << n << " from " << src << " to " << dest << endl;
    TOH(n-1,aux,src,dest);
}
int main(){
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    TOH(n, 'A', 'B', 'C');
}0.






