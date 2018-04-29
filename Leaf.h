#pragma once
#include "Component.h"
#include <iostream>
using namespace std;



class Leaf : public Component
{
public:
	Leaf();
	Leaf(int);
	virtual ~Leaf();
	//void levelOrder() override;
	void preorder() override;
	void inorder() override;
	void postorder() override;
	int calculate() override;
	int value;
};

