#include <iostream>
#include "CreditLineAccount.h"
using namespace std;

CreditLineAccount::CreditLineAccount(int accountNo, String name, int balance, int creditLine): Account(accountNo, name, balance)
{
	this->creditLine = creditLine;
}

int CreditLineAccount::withdraw(int amount)
{
	cout << "[인출]" << endl;

	if (amount <= (balance + creditLine))
	{
		balance = balance - amount;

		cout << "마이너스 한도: " << creditLine << endl;
		cout << "인출액: " << amount << endl;
		cout << "인출 결과: " << balance << endl;
		
		return amount;
	}

	else
	{
		cout << "인출 불가" << endl;

		return 0;
	}
}