'''
Docstring for Parikshak.DecisionTree

In this problem you have to construct a decision tree in the manner detailed below and print out the data which satisfies some given conditions.
The Task
The lines in item (3) describe a binary decision tree, where the internal nodes are conditions and the leaf node denotes decisions. All the conditions are binary - the true branch is to the right and the false branch to the left.

Each line in item (4) describes a situation using the various decisions constituting the tree. You have to traverse the tree based in these decisions, taking appropriate branches. The traversal stops when you hit a leaf or when a decision node whose value is not given is encountered. In the first case the leaf label is printed out. In the other case, the labels of all leaf nodes in the remaining subtree are printed out in left to right mode.
For each line of conditions in (4) the program should output on a separate line all the data which satisfy all the conditions maintaining the left to right order.
Note
The data will be contained only in the leaf nodes. The conditions given will be in the proper order starting from the root and moving downwards.
 
The input will consist of a sequence of lines.
A series of lines containing two strings
END DATA (on a separate line)
A positive integer N (on a separate line)
N lines containing an integer M followed by M conditions. Each condition will be a string. e.g, 4 C1 C2 !C3 C5 where ! indicates a negation i.e, NOT C3 in the above example. (No space between ! and condition)
Each of the lines in (1) will contain two strings.

The first string is a sequence of zero of more L’s and R’s enclosed within a pair of brackets.
The second string being the condition or data. (A string will be a single word without any spaces)

Input
() 4-legged
(R) carnivorous
(L) winged
(LL) amphibian
(RL) elephant
(RR) tiger
(LR) crow
(LLL) man
(LLR) frog
END DATA
4
2 !4-legged !winged
2 4-legged carnivorous
2 4-legged !carnivorous
2 !4-legged winged
Output
man frog
tiger
elephant
crow
'''

import sys

def solve():
    # Read all lines from standard input
    input_data = sys.stdin.read().splitlines()
    if not input_data:
        return

    tree = {}
    idx = 0
    
    # 1. Parse the Tree Data
    while idx < len(input_data):
        line = input_data[idx].strip()
        if line == "END DATA":
            idx += 1
            break
        if not line:
            idx += 1
            continue
        
        parts = line.split()
        # Extract path by removing '(' and ')'
        path_str = parts[0][1:-1] 
        label = parts[1]
        tree[path_str] = label
        idx += 1

    # 2. Helper function to get all leaves from a given path (Left to Right)
    def get_all_leaves(path):
        # If it's a leaf node
        if path + 'L' not in tree and path + 'R' not in tree:
            return [tree[path]]
        
        leaves = []
        if path + 'L' in tree:
            leaves.extend(get_all_leaves(path + 'L'))
        if path + 'R' in tree:
            leaves.extend(get_all_leaves(path + 'R'))
        return leaves

    # 3. Helper function to traverse based on query conditions
    def traverse(path, conditions):
        if path not in tree:
            return []
      
        label = tree[path]
        
        # Check if current node is a leaf
        if path + 'L' not in tree and path + 'R' not in tree:
            return [label]
        
        # It's a condition node
        if label in conditions:
            if conditions[label] == True:
                return traverse(path + 'R', conditions)
            else:
                return traverse(path + 'L', conditions)
        else:
            # Condition not given in query, fetch all leaves in this subtree
            return get_all_leaves(path)

    # 4. Process Queries
    if idx < len(input_data):
        N = int(input_data[idx].strip())
        idx += 1
        
        for _ in range(N):
            if idx >= len(input_data):
                break
            query_line = input_data[idx].strip().split()
            idx += 1
            
            if not query_line:
                continue
                
            # Parse conditions into a dictionary
            cond_list = query_line[1:]
            conditions = {}
            for c in cond_list:
                if c.startswith('!'):
                    conditions[c[1:]] = False
                else:
                    conditions[c] = True
                    
            # Traverse and print result
            result = traverse('', conditions)
            print(" ".join(result))

if __name__ == '__main__':
    solve()
