#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "CheckingTrafficCardAccount.h"
#include "CreditLineAccount.h"
#include "BonusPointAccount.h"
using namespace std;

int main()
{
	Account a(111, "홍길동", 5000);
	CheckingAccount ca(222, "우리", 3000, "2525");
	CheckingTrafficCardAccount ct(333, "미나리", 10000, "1004", true);
	CheckingTrafficCardAccount ct2(666, "개나리", 10000, "2002", false);
	CreditLineAccount cl(555, "해피", 15000, 3000);
	BonusPointAccount bp(777, "항상", 50000, 100);

	a.deposit(5000);
	a.withdraw(1000);
	a.withdraw(50000);
	a.check();
	cout << endl;

	ca.pay("8282", 1000);
	ca.pay("2525", 1000);
	ca.check();
	cout << endl;

	ct.payTrafficCard("800", 3000);
	ct.check();
	cout << endl;

	ct2.payTrafficCard("101", 3000);
	ct2.check();
	cout << endl;
	
	cl.withdraw(20000);
	cl.withdraw(5000);
	cl.check();
	cout << endl;

	bp.deposit(10000);
	bp.check();
	cout << endl;

	return 0;
}