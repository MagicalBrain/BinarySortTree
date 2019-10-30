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
typedef struct BSTNode
{
	KeyType data;
	BSTNode *left, *right;
}BSTNode,*BSTree;



//BSTree T
bool find(KeyType x, BSTNode *t)
{
	if (t == NULL)
		return false;
	while (t!= NULL)
	{
		if (t->data == x)
			return true;
		if (x < t->data)
			t = t->left;
		if (t->data < x)
			t = t->right;
	}
	
	return false;
}


KeyType insert(KeyType x,BSTNode * &t)
{
	if (t == NULL)
	{
		t = (BSTNode*)malloc(sizeof(BSTNode));
		t->data = x;
		t->left = NULL;
		t->right = NULL;
		return 1;
	}	
	else if (x < t->data)
		return insert(x, t->left);
	else if (t->data < x)
		return insert(x, t->right);
	return 0;
}

void Create_BST(BSTree& T, KeyType str[], int n)
//构造二叉排序树
{
	T = NULL;
	int i = 0;
	while (i<n)
	{
		insert(str[i++], T);
	}
}

void remove(KeyType &x, BSTNode *t)
{
	if (t == NULL)
		return;
	if (x < t->data)
		remove(x, t->left);
	else if (t->data < x)
		remove(x, t->right);
	else if (t->left != NULL && t->right != NULL)
	{
		BSTNode *tmp = t->right;
		while (tmp->left != NULL)
			tmp = tmp->left;

		t->data = tmp->data;
		remove(t->data, t->right);

	}
	else
	{
		BSTNode *re = t;
		t = (t->left != NULL) ? t->left : t->right;

	}
}