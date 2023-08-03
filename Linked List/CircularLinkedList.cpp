#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
Node * head = NULL;
void circularLinkedList(int new_data){
    Node * new_node = (struct Node*) malloc (sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next = head;
    head = new_node;
}
void display(){
    Node* ptr;
    ptr = head;
    while(ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << head;
}
int main(){
    circularLinkedList(48);
    circularLinkedList(4);
    circularLinkedList(32);
    circularLinkedList(8);
    cout << "The Linked List is: ";
    cout << endl;
    display();
    cout << endl;
    cout << sizeof(struct Node);
    return 0;
}
