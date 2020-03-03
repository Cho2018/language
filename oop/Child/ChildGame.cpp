#include <iostream>
#include "Child.h"
using std::cout;
using std::endl;

int main()
{
	Child child1, child2;

	child1.numOfBead = 15;
	child2.numOfBead = 9;

	cout << "현재 구슬 보유 현황: " << endl;
	cout << "어린이1: ";
	child1.ShowResult();
	cout << "어린이2: ";
	child2.ShowResult();

	cout << "1차 게임 후: " << endl;
	child1.TradeBead(child2, 2);
	cout << "어린이1: ";
	child1.ShowResult();
	cout << "어린이2: ";
	child2.ShowResult();

	cout << "2차 게임 후: " << endl;
	child2.TradeBead(child1, 7);   
	cout << "어린이1: ";
	child1.ShowResult();
	cout << "어린이2: ";
	child2.ShowResult();
	
	return 0;
}
