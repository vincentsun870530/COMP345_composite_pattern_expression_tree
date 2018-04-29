#include <iostream>
#include "Component.h"
#include "Unary.h"
#include "Leaf.h"
#include "CompositeNode.h"
#include "NodeFactory.h"
#include "algorithm"
#include <string>
using namespace std;

int main()
{
	//Leaf *a = new Leaf(5);
	//Leaf *b = new Leaf(6);
	//Leaf *c = new Leaf(7);
	cout << "please enter your equation" << endl;
	string input;
	getline(cin, input);
	cout << input <<endl;
	cout << input.size() << endl;

	NodeFactory * factory = new NodeFactory();
	Component* a2 = factory->getLeafFactory(3);
	Component* a3 = factory->getLeafFactory(4);
	Component* a4 = factory->getBinaryNode('+',a2,a3);
	cout << "-------------------------- " << endl;
	cout << "-------------------------" << endl;
	cout << "levelOrder:!!!!!!!!!!!!!!! " << endl;
	factory->levelOrderPrint();
	cout << "-------------------------- " << endl;
	cout << "-------------------------" << endl;

	Component* a1 = new Multiplier(new Negate(new Leaf(5)), new Adder(new Leaf(3), new Leaf(4)));
	/*Unary* a2 = new Unary(1);
	Unary* a3 = new Unary(2);
	a1->Add(a2);
	a1->Add(a3);
	a2->Add(a);
	a2->Add(b);
	a3->Add(c);*/

	cout << "Preorder:!!!!!!!!!!!!!!! " << endl;
	a1->preorder();
	cout << "-------------------------- " << endl;
	cout << "-------------------------" << endl;
	cout << "inorder:!!!!!!!!!!!!!!! " << endl;
	a1->inorder();
	cout << "-------------------------- " << endl;
	cout << "-------------------------" << endl;
	cout << "postorder:!!!!!!!!!!!!!!! " << endl;
	a1->postorder();
	cout << "Final value: " << a1->calculate()<<endl;
	cout << "-------------------------- " << endl;
	cout << "-------------------------" << endl;
	cout << "levelOrder:!!!!!!!!!!!!!!! " << endl;
	//a1->levelOrder();
	system("pause");
	return 0;
}
