//binatytree.cpp

#include "binarytree.h"
#include <cstdlib> //malloc

namespace binarytree
{
	//set methods
	treenode::treenode (short int type, treenode* leftroot, treenode* rightroot, char value)
	{
		treenode::type = type;
		if (type < 2) //type = 0/1
		{
			treenode::left = leftroot;
			treenode::right = rightroot;
		}
		else //type = 2
		{
			treenode::value = value;
		}
	}

	void treenode::setNode(char branch, treenode* root)
	{
		root->type = 1;
		if (branch == 'r')
		{
			this->right = root;
		}
		else //branch == 'l'
		{
			this->left = root;
		}
		return;
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

	//function
	treenode* summtree(treenode* leftroot, treenode* rightroot)
	{
		leftroot->type = 1;
		rightroot->type = 1;
		treenode newnode(0, leftroot, rightroot, '\0');
		return &newnode;
	};
}