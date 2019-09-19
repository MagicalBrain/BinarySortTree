#pragma once
#include <iostream>

//???
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




//BSTree T
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


void insert(KeyType x,BSTNode *t)
{
	if (t == NULL)
	{
		t = (BSTNode*)malloc(sizeof(BSTNode));
		t->data = x;
		t->left = NULL;
		t->right = NULL;
	}	
	else if (x < t->data)
		insert(x, t->left);
	else if (t->data < x)
		insert(x, t->right);
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