#include <iostream>
using namespace std;
void r(int a, int b){
    static int count=0;
    ++count;
    cout << "hi" << a << b << endl;
    cout << count << endl;
    if(count==5){
    cout << count << endl;
    return;
    }else{
        r(b,a);
    }
}
int main(){
    r(5,3);
}