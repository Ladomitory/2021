//binatytree.cpp

#include "binarytree.h"
#include <cstdlib> //malloc

namespace bt
{
	//set methods
	treenode::treenode(void)
	{

	}
	treenode::treenode(short type, char value)
	{
		treenode::type = type; //type = 2

		treenode::value = value;
	}
	treenode::treenode (short type, treenode* leftroot, treenode* rightroot)
	{
		treenode::type = type; //type = 0/1
		
		treenode::left = leftroot;
		treenode::right = rightroot;
	}
	treenode::treenode(short type, treenode* leftroot, treenode* rightroot, char value)
	{

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