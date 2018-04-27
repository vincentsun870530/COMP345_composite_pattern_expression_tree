#pragma once
#include <iostream>
#include <vector>
#include "Component.h"
using namespace std;


class Unary : public Component
{
public:
	Unary();
	Unary(Component*);
	virtual ~Unary();
	virtual void preorder() =0;
	virtual void inorder() = 0;
	virtual void postorder() = 0;
	virtual int calculate() = 0;
	//void Operation1();
	void Add(Component*) override;
	void Remove(Component*) override;
		
	int id;
	Component* right;
	vector<Component*>tree;
};


