#pragma once
#include "Unary.h"

class Negate : public Unary
{
public:
	Negate()
	{
		
	};

	Negate(Component* right): Unary(right)
	{
		id = -1;
	};

	void preorder() override
	{
		cout << "I'm Negate Operation" << id << endl;
		this->right->preorder();
	};

	void inorder() override
	{
		cout << "I'm Negate Operation" << id << endl;
		this->right->inorder();
	};

	void postorder() override
	{
		this->right->postorder();
		cout << "I'm Negate Operation" << id << endl;
		
	}

	virtual ~Negate()
	{
	};

	int calculate() override
	{
		return (-1 * right->calculate());
	};
};

class Binary : public Unary
{
public:
	Binary()
	{
	};

	Binary(Component* left, Component* right) : Unary(right)
	{
		this->left = left;
	};

	virtual ~Binary()
	{
		delete left;
	};

	virtual void preorder() = 0;
	virtual void inorder() = 0;
	virtual void postorder() = 0;

	Component* left;
};

class Adder : public Binary
{
public:
	Adder()
	{
		
	};

	Adder(Component* left, Component* right) : Binary(left, right)
	{
		id = 123;
	};

	virtual ~Adder()
	{
	};

	void preorder() override
	{
		cout << "I'm Add Operation" << id << endl;

		this->left->preorder();
		this->right->preorder();
	};
	void inorder() override
	{
		this->left->inorder();
		cout << "I'm Add Operation" << id << endl;
		this->right->inorder();
	};

	void postorder() override
	{
		this->left->postorder();
		this->right->postorder();
		cout << "I'm Add Operation" << id << endl;

	}

	int calculate() override
	{
		return (left->calculate() + right->calculate());
	};
};

class Substracter : public Binary
{
public:
	Substracter()
	{
	};

	Substracter(Component* left, Component* right) : Binary(left, right)
	{
	};

	virtual ~Substracter()
	{
	};

	void preorder() override
	{
		cout << "I'm Substracter Operation" << id << endl;

		this->left->preorder();
		this->right->preorder();
	}

	void inorder() override
	{
		this->left->inorder();
		cout << "I'm Substracter Operation" << id << endl;
		this->right->inorder();
	}

	void postorder() override
	{
		this->left->postorder();
		this->right->postorder();
		cout << "I'm Substracter Operation" << id << endl;

	}

	int calculate() override
	{
		return (left->calculate() - right->calculate());
	};
};

class Multiplier : public Binary
{
public:
	Multiplier()
	{
	};

	Multiplier(Component* left, Component* right) : Binary(left, right)
	{
	};

	virtual ~Multiplier()
	{
	};

	void preorder() override
	{
		cout << "I'm Multiplier Operation" << id << endl;
		this->left->preorder();
		this->right->preorder();

	}

	void inorder() override
	{
		this->left->inorder();
		cout << "I'm Multiplier Operation" << id << endl;
		this->right->inorder();
	}

	void postorder() override
	{
		this->left->postorder();
		this->right->postorder();
		cout << "I'm Multiplier Operation" << id << endl;

	}

	int calculate() override
	{
		return (left->calculate() * right->calculate());
	};
};

class Divider : public Binary
{
public:
	Divider()
	{
	};

	Divider(Component* left, Component* right) : Binary(left, right)
	{
	};

	virtual ~Divider()
	{
	};

	void preorder() override
	{
		cout << "I'm Divider Operation" << id << endl;
		this->left->preorder();
		this->right->preorder();
	
	}

	void inorder() override
	{
		this->left->inorder();
		cout << "I'm Divider Operation" << id << endl;
		this->right->inorder();
	}

	void postorder() override
	{
		this->left->postorder();
		this->right->postorder();
		cout << "I'm Divider Operation" << id << endl;

	}

	int calculate() override
	{
		return (left->calculate() / right->calculate());
	};
};
