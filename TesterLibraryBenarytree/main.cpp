//tester.cpp

#include <iostream>
#include <fstream>
#include "binarytree.h"

using namespace std;
using namespace binarytree;

int main()
{
	treenode b(1, 0, 0, 'w');
	treenode a(0, &b, 0, '\0');
	treenode d(2, 0, 0, 'b');
	treenode c(2, 0, &d, 'a');
	treenode* head = summtree(&a, &c);
	cout << head->right->value << ' ' << head->left->type << endl;


	return 0;
}