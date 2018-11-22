#include "BST.h"

int size = 24;      // size of BSt


// insert new node with data x into BST
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

// build tree of size (global variable)
void build(node*& root)
{
	if(!root)
		 {
                 root = new node;
                 root->data = size/2;
                 root->left = NULL;
                 root->right = NULL;
         }

	srand(time(0));
	for(int i = 0; i< size; ++i)
	{
		if(i % 2)
		insert(root, (rand()%size/2));
		else
		insert(root, (rand()%size/2 + size/2));
	}
}

// Display BST inorder traversal
bool display(node* root)
{
	if(root == NULL)
		return 0;
	
	display(root->left);
	cout << " -> " << root->data;
	display(root->right);
	return 1;
}

// Display left side of root of BST
void displayL(node* root)
{
	if(!root)
		return;

	cout << " -: " << root->data;
	return displayL(root->left);
}

// Display right side of root of BST
void displayR(node* root)
{
	if(!root)
		return;

	cout << "-: "<< root->data;
	return displayR(root->right);
}

void destroy(node*& root)
{
	if(!root)
		return;
	destroy(root->left);
	destroy(root->right);
	delete root;
	root = NULL;
}

