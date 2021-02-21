//binarytree.h
#pragma once

namespace binarytree
{
	class treenode
	{
	private:
		short int type;
		treenode* left,
			* right;
		char value;
	public:
		treenode* make(short int type = 0);

	};
}