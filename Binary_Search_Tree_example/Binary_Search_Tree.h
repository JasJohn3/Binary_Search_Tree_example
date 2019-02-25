#pragma once
#ifndef TREE_H
#define TREE_H
#include <cstddef>
#include <iostream>

template<typename Type>
struct NODE
{
	Type Data;
	NODE<Type>* left;
	NODE<Type>* right;
	NODE<Type>* Parent;
	NODE<Type>()
	{

		left = nullptr;
		right = nullptr;
		Parent = nullptr;

	}
};

template<typename Type>
class TREE
{

public:

	NODE<Type>* Search(struct NODE<Type>* NODE, Type Data)
	{
		//Search if the Root is Null return a Null Node
		//or NODE->Data is the same as the Data entered
		if (NODE == NULL || NODE->Data == Data)
			return NODE;
		//If The Data is not equal compare if the Data is less than current Data
		else if (NODE->Data < Data)
		{
			return search(NODE->right, Data);
		}
		else { Search(NODE->left, Data); }
	}
	NODE<Type>* inorder()
	{
		inorder(Root->left);
		std::cout << "NODE Value: " << Root->Data << std::endl;
		std::cout << "NODE Parent: " << Root->Parent->Data << std::endl;
		inorder(Root->right);
	}
	NODE<Type>* insert(Type Key)
	{
		NODE<Type> * temp = new NODE<Type>();
		temp->Data = Key;
		if (Root == NULL)
		{
			return Root=temp;
		}
		else
		{
			return temp = insert(temp, Key);
		}

	}
	NODE<Type>* insert(NODE<Type>* root,Type Key)
	{
		if (Key < root->Data)
		{
			while (root->left != nullptr)
			{
				if (root->left == nullptr)
				{
					root->left = root;
					root->left->Parent = root;
					return root;
				}
			}

		}
		else
		{
			while (root->right != nullptr)
			{
				if (root->right == nullptr)
				{
					root->right = root;
					root->right->Parent = root;
					return root;
				}
			}

		}
		return root;
	}

private:

	struct NODE<Type>* Root=NULL;
	
};
#endif

