#include "Leaf.h"

Leaf::Leaf()
{
	value = 0;
}

Leaf::Leaf(int value)
{
	this->value = value;
	id = '0' + this->value;
	tree.push_back(this);
}

Leaf::~Leaf()
{
}

void Leaf::preorder()
{
	cout << "I'm a leaf " << " value is " << value << endl;
}

void Leaf::inorder()

{
	cout << "I'm a leaf " << " value is " << value << endl;
}

void Leaf::postorder()
{
	cout << "I'm a leaf " << " value is " << value << endl;
}

//void Leaf::levelOrder()
//{
//	cout << "I'm a leaf " << " value is " << value << endl;
//}


int Leaf::calculate()
{
	return value;
}

