#include <iostream>
#include "BSTree.h"

using namespace std;

int a[] = {10,8,6,21,87,56,4,0,11,3,22,7,5,34,1,2,9};

int main()
{
	BSTree T;
	T.root = NULL;
	BSTNode *t = T.root;
	for (int i = 0; i < 17; i++)
	{
		insert(a[i], t);
	}
	cout << endl;
	cout<<"Find 2 is " << (find(2, t) ? "true" : "false")<<endl;
	return 0;
}