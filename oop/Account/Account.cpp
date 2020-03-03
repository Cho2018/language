#include <iostream>
#include "Account.h"
using std::cout;
using std::endl;

Account::Account(int accountNo, string name, int balance)
{
	this->accountNo = accountNo;
	this->name = name;
	this->balance = balance;
}

void Account::SetAccountNo(int accountNo)
{
	this->accountNo = accountNo;
}

void Account::SetName(string name)
{
	this->name = name;
}

void Account::SetBalance(int balance)
{
	this->balance = balance;
}

void Account::Input(int m)
{
	balance += m;
}

void Account::Output(int m)
{
	if(m <= balance)
	{
		balance -= m;
		cout << m << "�� �����Ͽ����ϴ�." << endl;
	}

	else
		cout << "�ܾ��� �����մϴ�!" << endl;
}

void Account::ShowResult() const
{
	cout << "���¹�ȣ: " << accountNo << endl;
	cout << "�̸�: " << name << endl;
	cout << "�ܾ�: " << balance << endl;
}