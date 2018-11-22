#include "BST.h"

using namespace std;

int main()
{
	node* root = NULL;

	build(root);
	cout << "Test" << endl;
	display(root);
	cout << "\nEnd Test" << endl;
	destroy(root);

return 0;
}
