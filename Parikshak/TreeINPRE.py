'''
Docstring for Parikshak.TreeINPRE
Given a list of integers, you will need to write a C++ program to construct a binary search tree (left sub tree is less than the right subtree). After constructing the binary search tree do an inorder traversal and preorder traversal. Find the positions where node value is same in both the positions.
This checking can be done by storing inorder traversal & preorder traversals of the tree in two separate arrays. 

List of positive integers, each indicating the value of node to be inserted in the binary search tree
The input will be terminated by -1
Assumptions:
Data in each node is unique.
Positions numbering starts from 1

On each line, print the positions & node values which are same in both the traversals. The position and the node value should be separated by a single space.
The position & node value pair should be printed in ascending order of positions.
Terminate the output by a newline character

Sample Input 1: Text in /**/ not a part of the input]
6 3 4 1 7 5 -1 /*Nodes to be inserted in tree*/
Sample Output 1 /*node value pair on each line*/
2 3
6 7
'''

import sys

class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

def insert(root, val):
    if root is None:
        return Node(val)
    if val < root.val:
        root.left = insert(root.left, val)
    elif val > root.val:
        root.right = insert(root.right, val)
    return root

def inorder(root, result):
    if root:
        inorder(root.left, result)
        result.append(root.val)
        inorder(root.right, result)

def preorder(root, result):
    if root:
        result.append(root.val)
        preorder(root.left, result)
        preorder(root.right, result)

def solve():
    # Read all inputs from standard input
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    root = None
    for item in input_data:
        val = int(item)
        if val == -1:
            break
        root = insert(root, val)
        
    if root is None:
        return
        
    in_list = []
    pre_list = []
    
    # Perform traversals
    inorder(root, in_list)
    preorder(root, pre_list)
    
    # Compare and print 1-based positions where values match
    for i in range(len(in_list)):
        if in_list[i] == pre_list[i]:
            print(f"{i + 1} {in_list[i]}")

if __name__ == '__main__':
    solve()
