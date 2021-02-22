//binarytree.h
#pragma once

#include <cstdlib>

namespace binarytree
{
	class treenode
	{
	public:
		short int type = 0;
		treenode* left = 0,
			* right = 0;
		char value = '\0';
		//set methods
		treenode(void);
		treenode(short type, treenode* leftroot = 0, treenode* rightroot = 0, char value = '\0');
		//type = 0/1/2 --0 - root(������), 1 - node(����), 2 - leaf(����);
		void setNode(char branch, treenode* node);
		//Branch(�����) = 'r'/'l' --r - right, l - left;

		//get methods

		//del methods
		void delNode();

		//other methods
		
	};
	//function
	treenode* summtree(treenode* leftroot, treenode* rightroot);
}