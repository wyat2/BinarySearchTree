# BinarySearchTree
Binary Search Tree is a data structure that stores nodes.  As the nodes are added to the binary search tree they are linked to a previous node either by the left or right pointer of the parent node.  if the node data value is less than the parent using the left pointer is chosen.  If the node data value is greater or equal to the parent node then the right pointer is chosen.  This traversal by compary is done until a pointer of value NULL is reached.  This indecates you are at the leaf level of the tree and the node is inserted. 

## Functions ##
These functions are include to initialize a BST
- **build** : Build a tree using the global variable size as stopping condition.  Build function calls insert to add to the tree.
- **insert** : Insert function has parameters 1. *node*& root* (which should always be the root of the BST) 2. *int x* (data value of new node to be inserted.
- **display** : Display BST inorder traversal
- **destroy** : Acts as a destructor deleting all nodes in the BST

## Files ##
These files allow the BST to be complied and executed
- **main.cpp** : driver file.  It creates a root pointer to pass into the functions from main. Then calls build, display, and destroy.
- **BST.h** : header file.  Contains the function prototypes and global variable size.
- **BST.cpp** : implimentation file.  Contains the functions of the BST


> Andrew Wyatt
