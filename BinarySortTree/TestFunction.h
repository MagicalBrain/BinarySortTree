#pragma once
#include <iostream>
#include "BSTree.h"

using namespace std;

void TestBST()
{
	int in[17] = { 10,8,6,21,87,56,4,0,11,3,22,7,5,34,1,2,9 };
	BSTree T;
	T = new BSTNode;
	Create_BST(T, in, 17);
}