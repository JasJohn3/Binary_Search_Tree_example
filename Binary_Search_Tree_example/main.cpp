#include <iostream>
#include "Binary_Search_Tree.h"

int main()
{
	TREE<int> BST;
	BST.insert(20);
	BST.insert(15);
	BST.insert(5);
	BST.insert(25);
	BST.insert(35);
	BST.inorder();
	system("pause");
	return  0;
}