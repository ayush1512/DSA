#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};
Node * head = NULL;
void doublyLinkedList(int new_data){
    Node * new_node = (struct Node*) malloc (sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next = head;
    new_node -> prev = NULL;
    if(head != NULL){
        head -> prev = new_node;
    }
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
    doublyLinkedList(48);
    doublyLinkedList(4);
    doublyLinkedList(32);
    doublyLinkedList(8);
    cout << "The Linked List is: ";
    cout << endl;
    display();
    cout << endl;
    cout << sizeof(struct Node);
    return 0;
}
