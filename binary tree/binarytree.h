//binarytree.h
#pragma once

#include <cstdlib>

namespace binarytree
{
	class treenode
	{
	private:
		short int type = 0;
		treenode* left = 0,
			* right = 0;
		char value = '\0';
	public:
		//set methods
		void setType(short int type);
		//type = 0/1/2 --0 - root(корень), 1 - node(узел), 2 - leaf(лист);
		void setNode(char branch, treenode* node);
		//Branch(ветка) = 'r'/'l' --r - right, l - left;

		//get methods

		//del methods
		void delNode();

		//other methods
		treenode* summtree(treenode* leftroot, treenode* rightroot);
	};
}