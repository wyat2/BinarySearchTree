#include "BST.h"

int size = 24;

void build(node*& root)
{
	if(!root)
	{
		root = new node;
		root->data = rand()%24;
		root->left = NULL;
		root->right = NULL;
                --size;
	}
		if(size == 0)
			return;
		else
			build(root->left);
}


/*
void build(node*& root)
{
	node* temp = new node;
	temp->data = size/2;
	temp->left = NULL;
	temp->right = NULL;
	root = temp;

	int x;

	for(int i=0; i<size; ++i)
	{
		x = rand() % size;
		cout << i << "x = " << x << endl;
           insert(temp, x);
	}
}

bool insert(node*& root, int x)
{
	if(!root)
	{
		root = new node;
		root->data = x;
		root->left = NULL;
		root->right = NULL;
		return 1;
	}
	else
		if(x < root->data)
			return insert(root->left, x);
	        else
			return insert(root->right, x);
}
*/

bool display(node* root)
{
	if(!root)
	{
		cout << "NULL " << endl;
		return 0;
	}
        else
	{
	return display(root->left);
	return display(root->right);
	cout << "-> " << root->data;
	}
	
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

