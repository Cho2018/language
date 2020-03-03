#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(int accountNo, String name, int balance)
{
	this->accountNo = accountNo;
	this->name = name;
	this->balance = balance;
}

void Account::deposit(int amount)
{
	balance = balance + amount;

	cout << "[����]" << endl;
	cout << "���ݾ�: " << amount << endl;
	cout << "���� ���: " << balance << endl;
}

int Account::withdraw(int amount)
{
	cout << "[����]" << endl;

	if (amount <= balance)
	{
		balance = balance - amount;

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

void Account::check()
{
	cout << "[�ܾ���ȸ]" << endl;
	cout << "���¹�ȣ: " << accountNo << endl;
	cout << "�̸�: ";
	name.Get();
	cout << endl;
	cout << "�ܾ�: " << balance << endl;
}
