#pragma once
#include <iostream>


#define TRUE 1
#define FALSE 0

#define OK 1
#define ERROR 0
//#define OVERFLOW -1

typedef int Status;

#define KeyType int

using namespace std;

//二叉查找树结点定义
struct BSTNode
{
	KeyType data;
	BSTNode *left, *right;
};

//二叉树查找树定义
struct BSTree
{
	BSTNode *root;
};





bool find(KeyType x, BSTNode *t)
{
	if (t == false)
		return false;
	else if (x < t->data)
		return  find(x, t->left);
	else if (t->data < x)
		return find(x, t->right);
	else
		return false;
}


bool find(KeyType &x)
{
	return find(x, root);
}