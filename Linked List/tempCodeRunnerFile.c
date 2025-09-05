#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int val;
    struct Node* next;
}Node;
int len(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main() {
    int arr[4] = {2, 5, 8, 7};
    // Create a linked list
    struct Node* head = malloc(sizeof(struct Node));
    if (!head) return 1;
    head->val = arr[0];
    struct Node* current = head;
    for (int i = 1; i < 4; i++) {
        current->next = malloc(sizeof(struct Node));
        if (!current->next) return 1;
        current = current->next;
        current->val = arr[i];
    }
    current->next = NULL;
    
    // Print the length of the linked list
    printf("%i\n",len(head));
}