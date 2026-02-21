'''
Write a program to create Link-List and different operations on it. The operation descriptions along with their code is given in the table below.
Sr No
Operation Code
Operation Description
1
AB  
Add the node at the beginning of the list.
2
PR
Print the link-list from head to end of the list, each node separated by space and terminated by a newline.
3
AE  
Add the node at the end of the list.
4
AMA  
Add the node at the middle after a particular node.
5
AMB  
Add the node at the middle before a particular node.
6
DN  
Delete the node.
 
7
DNA  
Delete the node after a particular node.
8
DNB  
Delete the node before a particular node.
9
FPR
Fancy Print of the link-list. Each node’s info printed, separated by (→),without any space in between and terminated by a newline. → symbol is hyphen (-) and arrow (>)
10
RPR
Reverse Print of the link-list. Each node’s info printed, separated by space and terminated by a newline.
Your program should take command as given above, corresponding input and perform the operations till the exit command is given. Assume that ‘node_info’ is a single integer 0 < node_info < 100
 
 
INPUT
AB 1
AB 2
AB 3
PR
AB 5
PR
EXIT
 
OUTPUT
3 2 1
5 3 2 1
INPUT
AB 1
AB 2
AE 3
AE 4
AB 5
PR
EXIT
 
OUTPUT
5 2 1 3 4
INPUT
AE 1
AE 2
AE 3
AE 4
AE 5
AMA 3 6
PR
EXIT
 
OUTPUT
1 2 3 6 4 5
INPUT
AB 1
AB 2
AB 3
AMA 2 5
PR
EXIT
 
OUTPUT
3 2 5 1
INPUT
AB 1
AE 2
AE 5
AB 6
PR
AMA 2 10
PR
EXIT
 
OUTPUT
6 1 2 5
6 1 2 10 5
INPUT
AE 1
AE 2
AE 5
AE 6
AMB 5 8
PR
EXIT
 
OUTPUT
1 2 8 5 6
INPUT
AB 1
AB 2
AB 3
AE 5
AMA 5 10
PR
AMB 5 11
PR
EXIT
 
OUTPUT
3 2 1 5 10
3 2 1 11 5 10
INPUT
AE 1
AE 2
AB 3
AB 5
PR
DN 2
PR
EXIT
 
OUTPUT
5 3 1 2
5 3 1
INPUT
AE 1
AE 4
AB 2
AB 5
AB 6
DNA 2
PR
EXIT
 
OUTPUT
6 5 2 4
INPUT
AE 1
AE 5
AE 7
AE 9
DNB 5
PR
DNB 5
PR
EXIT
 
OUTPUT
5 7 9
5 7 9
INPUT
AE 2
AE 3
AB 1
AB 5
AB 6
AE 8
FPR
DNB 3
DNA 3
PR
EXIT

OUTPUT
6->5->1->2->3->8
6 5 1 3
INPUT
AE 1
AE 3
AE 2
AE 5
RPR
DNB 3
DNA 1
FPR
EXIT
 
OUTPUT
5 2 3 1
3->2->5
'''

class Node:
    def __init__(self,val=None):
        self.val = val
        self.next = None
        
head = Node(10)
head.next = Node(20)
head.next.next = Node(30)
        
while True:
    ip = list(input().split())
    if ip[0] == 'AB':
        data = ip[1]
        new = Node(data)
        new.next = head
        head = new
    elif ip[0] == 'PR':
        temp = head
        while temp is not None:
            print(temp.val)
            temp = temp.next
        temp = head
        while temp is not None:
            new.next = temp
            temp = temp.next
        new.next.next = new
        new.next = None
    elif ip[0] == 'AMA':
        data = ip[1]
        new = Node(data)
        temp = head
        target = int(ip[2])
        while temp.next is not None and temp.val != target:
            temp = temp.next
        if temp.val == target:
            new.next = temp.next
            temp.next = new
    elif ip[0] == 'AMB':
        new = Node(ip[1])
        temp = head
        target = int(ip[2])
        while temp.next.next is not None and temp.next.val != target:
            temp = temp.next
        if temp.next.val == target:
            new.next = temp.next
            temp.next = new
    elif ip[0] == 'DN':
        target = int(ip[1])
        temp = head
        if temp.val == target:
            head = temp.next
            temp = head
        else:    
            while temp.next is not None and temp.next.val != target:
                temp = temp.target
            if temp.next.val == target:
                temp.next = temp.next.next
    elif ip[0] == 'DNA':
        target = int(ip[1])
        temp = head
        if temp.val == target:
            head = temp.next.next
        else:
            while temp.next is not None and temp.next.val != target:
                temp = temp.target
            if temp.next.val == target:
                temp.next = temp.next.next
    elif ip[0] == 'DNB':
        target = int(ip[1])
        temp = head
        if temp.val == target:
            print('None')
        else:
            while temp.next is not None and temp.next.val != target:
                temp = temp.next
            if temp.next.val == target:
                temp = temp.next
                head = temp
    elif ip[0] == 'FPR':
        temp = head
        while temp.next is not None:
            print(temp.val,end='')
            if temp.next.val is not None:
                print('->',end='')
            temp = temp.next
        print(temp.val)
    elif ip[0] == 'EXIT':
        break
    
    
# class Node:
#     def __init__(self, val=None):
#         self.val = val
#         self.next = None

# class LinkedList:
#     def __init__(self):
#         self.head = None

#     def add_beginning(self, val):
#         new_node = Node(val)
#         new_node.next = self.head
#         self.head = new_node

#     def add_after(self, val, target):
#         temp = self.head
#         while temp is not None:
#             if str(temp.val) == str(target):
#                 new_node = Node(val)
#                 new_node.next = temp.next
#                 temp.next = new_node
#                 return
#             temp = temp.next
#         print(f"Target {target} not found.")

#     def add_before(self, val, target):
#         if self.head is None:
#             return

#         if str(self.head.val) == str(target):
#             self.add_beginning(val)
#             return

#         temp = self.head
#         while temp.next is not None:
#             if str(temp.next.val) == str(target):
#                 new_node = Node(val)
#                 new_node.next = temp.next
#                 temp.next = new_node
#                 return
#             temp = temp.next
#         print(f"Target {target} not found.")

#     def delete_node(self, target):
#         if self.head is None:
#             return

#         if str(self.head.val) == str(target):
#             self.head = self.head.next
#             return

#         temp = self.head
#         while temp.next is not None:
#             if str(temp.next.val) == str(target):
#                 temp.next = temp.next.next
#                 return
#             temp = temp.next
#         print(f"Node {target} not found.")
    
#     def delete_after(self, target):
#         temp = self.head
#         while temp is not None:
#             if str(temp.val) == str(target):
#                 if temp.next is not None:
#                     temp.next = temp.next.next
#                 return
#             temp = temp.next

#     def print_list(self):
#         temp = self.head
#         while temp is not None:
#             print(temp.val, end="")
#             if temp.next is not None:
#                 print(" -> ", end="")
#             temp = temp.next
#         print()

# # Driver Code
# ll = LinkedList()

# # Initialize with sample data if needed
# ll.add_beginning(30)
# ll.add_beginning(20)
# ll.add_beginning(10)

# print("Commands: AB <val>, AMA <val> <target>, AMB <val> <target>, DN <target>, DNA <target>, FPR, EXIT")

# while True:
#     try:
#         ip = list(input("Enter command: ").split())
#         if not ip:
#             continue
            
#         cmd = ip[0].upper()
        
#         if cmd == 'AB': # Add Beginning
#             ll.add_beginning(ip[1])
            
#         elif cmd == 'AMA': # Add Middle After
#             ll.add_after(ip[1], ip[2])
            
#         elif cmd == 'AMB': # Add Middle Before
#             ll.add_before(ip[1], ip[2])
            
#         elif cmd == 'DN': # Delete Node
#             ll.delete_node(ip[1])

#         elif cmd == 'DNA': # Delete Node After target? (Assumed based on naming)
#             ll.delete_after(ip[1])

#         elif cmd == 'FPR': # Full Print
#             ll.print_list()
            
#         elif cmd == 'EXIT':
#             break
#         else:
#             print("Unknown command")
            
#     except IndexError:
#         print("Invalid number of arguments for command.")
#     except Exception as e:
#         print(f"An error occurred: {e}")