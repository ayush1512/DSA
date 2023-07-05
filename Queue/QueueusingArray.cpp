//Queue using Array
#include <iostream>
using namespace std;
int queue[100], n=100, front=-1, rear=-1;
void insert(){
    int val;
    if(rear==n-1){
        cout << "Queue Underflow" << endl;
    }else{
        if(front==-1){
            front=0;
            cout << "Enter the element to be inserted: ";
            cin >> val;
            rear++;
            queue[rear]=val;
        }
    }
}
void dselete(){
    if(front==-1||front>rear){
            cout << "Queue Underflow";
            return;
    }else{
            cout << "Element deleted from the queue is: " << queue[front];
            front++;
    }
    cout << endl;
}
void display(){
    if(front==-1){
        cout << "Queue is empty";
    }else{
        cout << "Queue elements are: ";
        for(int i=front;i<=rear;i++){
                cout << queue[i] << " ";
                cout << endl;
        }
    }
}
int main(){
    int ch;
    cout << "1) Insert " << endl;
    cout << "2) Display " << endl;
    cout << "3) Delete " << endl;
    cout << "4) Exit " << endl;
    do
    {
        cout << "Enter your choice: ";
        cin >> ch;
        switch(ch)
        {
        case 1: insert();
        break;
        case 2: display();
        break;
        case 3: dselete();
        break;
        case 4: cout << "Exiting....." << endl;
        break;
        default: cout << "Invalid Selection." << endl;
        }
    } while (ch!=4);
    return 0;
    

    
}
