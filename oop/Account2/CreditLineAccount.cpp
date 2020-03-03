#include <iostream>
#include "CreditLineAccount.h"
using namespace std;

CreditLineAccount::CreditLineAccount(int accountNo, String name, int balance, int creditLine): Account(accountNo, name, balance)
{
	this->creditLine = creditLine;
}

int CreditLineAccount::withdraw(int amount)
{
	cout << "[����]" << endl;

	if (amount <= (balance + creditLine))
	{
		balance = balance - amount;

		cout << "���̳ʽ� �ѵ�: " << creditLine << endl;
		cout << "�����: " << amount << endl;
		cout << "���� ���: " << balance << endl;
		
		return amount;
	}

	else
	{
		cout << "���� �Ұ�" << endl;

		return 0;
	}
}