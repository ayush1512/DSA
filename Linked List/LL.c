#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void append(Node **head, int data)
{
    Node* newNode = createNode(data);
    if(*head == NULL){
        *head = newNode;
    }else{
        Node* last = *head;
        while(last->next != NULL){
            last = last->next;
        }
        last->next = newNode;
    }
}

void printList(Node* head){
    Node* current = head;
    while(current != NULL){
        printf("%i -> ",current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    // struct Node n1;
    // struct Node n2;
    // struct Node n3;
    // struct Node* head = &n1;

    // n1.data = 10;
    // n1.next = &n2;

    // n2.data = 20;
    // n2.next = &n3;

    // n3.data = 30;
    // n3.next = NULL;

    // printf("%i", head->next->next->data);

    Node* head = NULL;
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    printList(head);
    return 0;
}