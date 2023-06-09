/* Stack using Linked List */

#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
struct Node * top = NULL;
void push(int val){
    struct Node * newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode -> data = val;
    newnode -> next = top;
    top = newnode;
}
void pop(){
    if(top==NULL){
        cout << "Stack Underflow";
    }else{
        cout << "The popped element is: " << top -> data << endl;
        top = top -> next;
    }
}
void display(){
    struct Node * ptr;
    if(top==NULL){
        cout << "Stack is empty";
    }else{
        ptr = top;
        cout << "Stack Elements are: ";
        while(ptr!=NULL){
            cout << ptr -> data << " ";
            ptr = ptr -> next;
        }
    }
    cout << endl;
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    pop();
    display();
    return 0;
}