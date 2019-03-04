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

struct BSTNode
{
	KeyType data;
	BSTNode *left, *right;
};

struct BSTree
{
	BSTNode *root;
};