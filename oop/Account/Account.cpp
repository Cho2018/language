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
		cout << m << "원 인출하였습니다." << endl;
	}

	else
		cout << "잔액이 부족합니다!" << endl;
}

void Account::ShowResult() const
{
	cout << "계좌번호: " << accountNo << endl;
	cout << "이름: " << name << endl;
	cout << "잔액: " << balance << endl;
}