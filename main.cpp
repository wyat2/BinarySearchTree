#include "BST.h"

using namespace std;

int main()
{
	node* root = NULL;

	build(root);
	cout << "Test" << endl;
        display(root);
	destroy(root);

return 0;
}
