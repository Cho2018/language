#include <iostream>
#include "Child.h"
using std::cout;
using std::endl;

int main()
{
	Child child1, child2;

	child1.numOfBead = 15;
	child2.numOfBead = 9;

	cout << "���� ���� ���� ��Ȳ: " << endl;
	cout << "���1: ";
	child1.ShowResult();
	cout << "���2: ";
	child2.ShowResult();

	cout << "1�� ���� ��: " << endl;
	child1.TradeBead(child2, 2);
	cout << "���1: ";
	child1.ShowResult();
	cout << "���2: ";
	child2.ShowResult();

	cout << "2�� ���� ��: " << endl;
	child2.TradeBead(child1, 7);   
	cout << "���1: ";
	child1.ShowResult();
	cout << "���2: ";
	child2.ShowResult();
	
	return 0;
}
