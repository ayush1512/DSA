'''
Docstring for Parikshak.DecisionTree

n this problem you have to construct a decision tree in the manner detailed below and print out the data which satisfies some given conditions.
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