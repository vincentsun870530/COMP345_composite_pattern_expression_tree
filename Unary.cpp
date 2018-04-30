#include "Unary.h"


Unary::Unary()
{
}

Unary::Unary(Component* temp)
{
	this->right = temp;

}

Unary::~Unary()
{
	delete right;
}

//void Composite::Operation1()
//{
//
//	for (vector<Component*>::iterator comIter = tree.begin(); comIter != tree.end(); ++comIter)
//	{
//		(*comIter)->Operation();
//	}
//	cout << "I'm Composite Operation" << id << endl;
//};

