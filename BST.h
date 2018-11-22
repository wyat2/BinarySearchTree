// BST Header file

#include <iostream>
#include <cctype>
#include <cstdlib>

using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

//Prototypes
void build(node*& root);             // Build BST (using global variable size)
bool insert(node*& root, int x);     // Insert int x into BST
void destroy(node*& root);           // Destructor
bool display(node* root);            // Display inorder traversal of BST tree

void displayL(node* root);           // Display left side of tree
void displayR(node* root);           // Display right side of tree
