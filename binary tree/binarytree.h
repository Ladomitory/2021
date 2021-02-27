//binarytree.h
#pragma once

#include <cstdlib>

namespace bt
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
		treenode(short type, char value = '\0'); //type = 2 --2 - leaf(лист)
		treenode(short type, treenode* leftroot = 0, treenode* rightroot = 0); //type = 0/1 --0 - root(корень), 1 - node(узел)
		treenode(short type, treenode* leftroot = 0, treenode* rightroot = 0, char value = '\0');

		void setNode(char branch, treenode* node); //Branch(ветка) = 'r'/'l' --r - right, l - left;

		//get methods

		//del methods
		void delNode();

		//other methods
		
	};
	//function
	treenode* summtree(treenode* leftroot, treenode* rightroot);
}