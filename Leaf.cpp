#include "Leaf.h"

Leaf::Leaf()
{
	value = 0;
}

Leaf::Leaf(int value)
{
	this->value = value;
	id = '0' + this->value;
}

Leaf::~Leaf()
{
}

void Leaf::preorder()
{
	cout << id << endl;
}

void Leaf::inorder()

{
	cout << id << endl;
}

void Leaf::postorder()
{
	cout << id << endl;
}

//void Leaf::levelOrder()
//{
//	cout << "I'm a leaf " << " value is " << value << endl;
//}


int Leaf::calculate()
{
	return value;
}

