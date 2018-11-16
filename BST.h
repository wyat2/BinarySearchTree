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
void build(node*& root);
void destroy(node*& root);
bool display(node* root);
bool insert(node*& root, int x);


