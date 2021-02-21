//binatytree.cpp

#include "binarytree.h"
#include <cstdlib> //malloc

namespace binarytree
{
	//set methods
	void treenode::setType(short int type)
	{
		treenode::type = type;
	}

	void treenode::setNode(char branch, treenode* root)
	{
		root->type = 1;
		if (branch == 'r')
		{
			treenode::right = root;
		}
		else //branch == 'l'
		{
			treenode::left = root;
		}
	}

	//get methods


	//del methodss
	void treenode::delNode()
	{
		if (this->type == 2)
		{
			free(this);
		}
		else
		{
			this->left->delNode();
			this->right->delNode();
			free(this);
		}
		return;
	}

	//other methods
	treenode* treenode::summtree(treenode* leftroot, treenode* rightroot)
	{
		treenode newnode;
		newnode.type = 0;
		leftroot->type = 1;
		rightroot->type = 1;
		newnode.left = leftroot;
		newnode.right = rightroot;
		return &newnode;
	}
}