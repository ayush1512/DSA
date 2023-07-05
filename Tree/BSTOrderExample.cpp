/* BST Inorder Tree Traversal*/
#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left, *right;
};
Node *newNode(int data){
    Node *temp = new Node;
    temp -> data = data;
    temp -> left = temp -> right = NULL;
    return temp;
}
void printInorder(struct Node* node){ //left,root,right
    if(node == NULL)
    return;
    printInorder(node->left);
    cout << node -> data << " ";
    printInorder(node->right);
}
void printPreorder(struct Node* node){ //root,left,right
    if(node == NULL)
    return;
    cout << node -> data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}
void printPostorder(struct Node* node){ //left,right,root
    if(node == NULL)
    return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node -> data << " ";
}
int main(){
    struct Node *root = newNode(11);
    root -> left = newNode(6);
    root -> right = newNode(19);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(8);
    root -> left -> left -> right = newNode(5);
    root -> left -> right -> right = newNode(10);
    root -> right -> left = newNode(17);
    root -> right -> right = newNode(43);
    root -> right -> right -> left = newNode(31);
    root -> right -> right -> right= newNode(49);

    cout << "Inorder traversal of binary tree: " << endl;
    printInorder(root);
    cout << endl;

    cout << "Preorder traversal of binary tree: " << endl;
    printPreorder(root);
    cout << endl;

    cout << "Postorder traversal of binary tree: " << endl;
    printPostorder(root);
    cout << endl;

    return 0;
}