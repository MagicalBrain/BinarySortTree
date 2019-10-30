#include <iostream>
#include "BSTree.h"

using namespace std;

#define len 17
int a[len] = {10,8,6,21,87,56,4,0,11,3,22,7,5,34,1,2,9};

int main()
{
	BSTree T;
	T = NULL;
	BSTNode *t = T;
	/*
	for (int i = 0; i < 17; i++)
	{
		insert(a[i], t);
	}
	*/
	
	Create_BST(T, a, 17);
	cout << endl;
	int num = 20;
	cout<<"Find "<< num <<" is " << (find(num, T) ? "true" : "false")<<endl;
	return 0;
}