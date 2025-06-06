#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

/*
Pseudocode for reversing a linked list:
1. Initialize three pointers: prev = NULL, current = head, next = NULL
2. Iterate through the list:
   a. Store next node: next = current->next
   b. Reverse current node's pointer: current->next = prev
   c. Move pointers ahead: prev = current, current = next
3. Return prev (new head)
*/

// Function to reverse a linked list
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    while (current != nullptr) {
        // Store next
        next = current->next;
        
        // Reverse current node's pointer
        current->next = prev;
        
        // Move pointers one position ahead
        prev = current;
        current = next;
    }
    
    // prev is the new head
    return prev;
}

// Utility function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Main function to demonstrate
int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    std::cout << "Original linked list: ";
    printList(head);
    
    // Reverse the linked list
    head = reverseLinkedList(head);
    
    std::cout << "Reversed linked list: ";
    printList(head);
    
    // Free memory (in a real program, you should free all allocated nodes)
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}