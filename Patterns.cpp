#include <bits/stdc++.h>
using namespace std;

int main(){

    //Pattern n
    // int n;
    // cin >> n;
    //Loop
    //cout << endl;


    // Pattern 1;
    
    int n=5;
    // cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 2;
    // int n=5;
    // cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 3;

    for(int i=1; i<=5; i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 4;

    for(int i=1; i<=5; i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 5;

    for(int i=0; i<n; i++){
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 6;

    for(int i=0; i<n; i++){
        for(int j=0;j<n-i;j++){
            cout << j+1;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 7;

    for(int i=0; i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "x";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 8;

    for(int i=0; i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout << "x";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 9;

    for(int i=0; i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "x";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout << "x";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 10;

    for(int i=0; i<n-1;i++){
        for(int j=0;j<i;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i=0; i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    

}
