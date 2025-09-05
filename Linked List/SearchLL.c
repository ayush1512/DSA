#include <stdlib.h>
#include <stdio.h>
typedef struct Node
{
    int val;
    struct Node *next;
} Node;
int Search(Node *head, int value)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == value)
        {
            printf("found at index: %i\n\a", cnt);
            return 1;
        }
        cnt++;
        temp = temp->next;
    }
    printf("Not found\n");
    return 0;
}

int main()
{
    int arr[4] = {2, 5, 8, 7};
    // Create a linked list
    Node *head = (Node *)malloc(sizeof(struct Node));
    if (!head)
        return 1;
    head->val = arr[0];
    Node *current = head;
    for (int i = 1; i < 4; i++)
    {
        current->next = (Node *)malloc(sizeof(struct Node));
        if (!current->next)
            return 1;
        current = current->next;
        current->val = arr[i];
    }
    current->next = NULL;

    // Print the length of the linked list
    printf("%i\n", Search(head, 8));
}