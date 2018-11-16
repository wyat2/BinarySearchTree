#include "BST.h"

int size = 24;

void build(node*& root)
{
	node* temp = new node;
	temp->data = size/2;
	temp->left = NULL;
	temp->right = NULL;
	root = temp;


	for(int i=0; i<size; ++i)
	{
           insert(root, rand()%size);
	}
}

bool insert(node*& root, int x)
{
	if(!root)
	{
		root = new node;
		root->data = rand()%size;
		root->left = NULL;
		root->right = NULL;
		return 1;
	}
	else
		if(x < root->data)
			insert(root->left, x);
	        else
			insert(root->right, x);
}


bool display(node* root)
{
	if(!root)
		return 1;
	display(root->left);
	cout << "-> " << root->data;
	display(root->right);
}

void destroy(node*& root)
{
	if(!root)
		return;
	destroy(root->left);
	delete root;
	root = NULL;
	destroy(root->right);
}

