#include <iostream>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(int accountNo, String name, int balance, String cardNo): Account(accountNo, name, balance)
{
	this->cardNo = cardNo;
}

int CheckingAccount::pay(String cardNo, int amount)
{
	cout << "[����ī��]" << endl;

	if (this->cardNo.operator==(cardNo) == 0)
	{
		balance = balance - amount;

		cout << "ī���ȣ ��ġ" << endl;
		cout << "���� �ݾ�: " << amount << endl;
		
		return amount;
	}

	else
	{
		cout << "ī���ȣ ����ġ" << endl;
		cout << "���� �Ұ�" << endl;

		return 0;
	}
}
