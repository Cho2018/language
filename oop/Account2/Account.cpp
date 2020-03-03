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

	cout << "[예금]" << endl;
	cout << "예금액: " << amount << endl;
	cout << "예금 결과: " << balance << endl;
}

int Account::withdraw(int amount)
{
	cout << "[인출]" << endl;

	if (amount <= balance)
	{
		balance = balance - amount;

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

void Account::check()
{
	cout << "[잔액조회]" << endl;
	cout << "계좌번호: " << accountNo << endl;
	cout << "이름: ";
	name.Get();
	cout << endl;
	cout << "잔액: " << balance << endl;
}
