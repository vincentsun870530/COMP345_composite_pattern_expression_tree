#include "Unary.h"


Unary::Unary()
{
}

Unary::Unary(Component* temp)
{
	this->right = temp;
	tree.push_back(this);
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

void Unary::Add(Component* temp)
{
	cout << "I'm Composite add " << " id is " << id <<endl;
	tree.push_back(temp);
	cout << "Tree size!!!" << tree.size() << endl;;
}

void Unary::Remove(Component* temp)
{
	cout << "Tree size-----------" << tree.size() << endl;;
	cout << "I'm Composite remove " << " id is " << id << endl;
	cout << "Tree size-----------" << tree.size() << endl;

	for (vector<Component*>::iterator comIter = tree.begin(); comIter != tree.end(); comIter++)
	{
		if (*comIter == temp)
		{
			comIter = tree.erase(comIter);
			cout << "Tree size222222222222 " << tree.size() << endl;
			return;
		}
	}
	cout << "It's not in the tree" << endl;
}
