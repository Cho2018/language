#include <iostream>
#include "Child.h"
using std::cout;
using std::endl;

Child::Child()
{
	numOfBead = 0;
}

void Child::TradeBead(Child& c, int m)
{
	if(m >= 0 && m <= c.numOfBead)
	{
		numOfBead += m;
		c.numOfBead -= m;
	}

	else
		cout << "교환 불가" << endl;
}

void Child::ShowResult()
{
	cout << "구슬 보유 현황: " << numOfBead << endl;
}
