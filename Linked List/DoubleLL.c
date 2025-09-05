#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{   
    struct Node* prev;
    int data;
    struct Node* next;
}Node;

void createNode(int data){
    // Node* head = (Node*) malloc (sizeof(Node));
    Node* newNode = (Node*) malloc (sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

int main(){
    Node* newNode = (Node*) malloc (sizeof(Node));
    printf("%lu",sizeof(newNode));
}
