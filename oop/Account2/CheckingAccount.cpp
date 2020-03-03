#include <iostream>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(int accountNo, String name, int balance, String cardNo): Account(accountNo, name, balance)
{
	this->cardNo = cardNo;
}

int CheckingAccount::pay(String cardNo, int amount)
{
	cout << "[직불카드]" << endl;

	if (this->cardNo.operator==(cardNo) == 0)
	{
		balance = balance - amount;

		cout << "카드번호 일치" << endl;
		cout << "지불 금액: " << amount << endl;
		
		return amount;
	}

	else
	{
		cout << "카드번호 불일치" << endl;
		cout << "지불 불가" << endl;

		return 0;
	}
}
