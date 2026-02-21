class Node:
    def __init__(self,val=None):
        self.val = val
        self.next = None
        
head = Node(10)
head.next = Node(20)
head.next.next = Node(30)

'''
1. Using Stack to store the values of nodes
    then update the linked list with the values from the stack
        while keeping the head in the original place.
    Use of a temp pointer
    
    Two steps:
    1. Read and store
    2. Update the values
'''    
def stMthd():
    v = []
    temp = head
    while temp is not None:
        print(temp.val,end='->')
        temp = temp.next
    temp = head
    while temp is not None:
        v.append(temp.val)
        temp = temp.next
    temp = head
    while temp is not None:
        temp.val = v.pop()
        temp = temp.next
    temp = head
    while temp is not None:
        print(temp.val,end='->')
        temp = temp.next
# stMthd()

'''
2. Using prev, temp and front pointers to reverse in-place
    prev = None # Initialized with Null
    temp = head # Starting with Head
    front = temp.next   } Iteratively 
    temp.next = prev    }   Move the node to prev
    prev = temp         }   While the front will point the node ahead
    temp = front        }   Change the prev to point where temp was pointing
'''
def prevMthd(head):
    temp = head
    while temp is not None:
        print(temp.val,end='->')
        temp = temp.next
    
    temp = head
    prev = None
    
    while temp is not None:
        front = temp.next
        temp.next = prev
        prev = temp
        temp = front
    head = prev

    temp = head
    while temp is not None:
        print(temp.val,end='->')
        temp = temp.next

# prevMthd(head)

'''
3. Recursive Method
'''
