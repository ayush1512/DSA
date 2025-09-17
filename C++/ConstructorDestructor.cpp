#include <iostream>
using namespace std;
class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called!" << endl;
    }
};      
int main() {
    cout << "Creating an object of MyClass." << endl;
    MyClass obj; // Constructor is called here

    cout << "Exiting main function." << endl;
    return 0; // Destructor is called here when obj goes out of scope
}