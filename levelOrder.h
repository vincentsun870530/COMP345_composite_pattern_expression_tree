#pragma once
#include "Component.h"

class levelOrder
{
public:
	levelOrder()
	{
		
	}

	void levelOrderPrint()
	{
		for (vector<Component*>::iterator comIter = tree.begin(); comIter != tree.end(); ++comIter)
		{
			cout << (*comIter)->id << endl;
		}
	};

	int id = 0;
	vector<Component*>tree;
};
