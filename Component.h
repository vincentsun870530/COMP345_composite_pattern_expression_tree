#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Component
{
public:

	virtual void preorder() = 0;
	virtual void inorder() = 0;
	virtual void postorder() = 0;
	virtual int calculate() = 0;
	//virtual void Add(Component*){};
	//virtual void Remove(Component*){};

	char id;
	//vector<Component*>tree;
};
