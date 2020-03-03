#include <iostream>
#include "BalanceOutOfBoundsException.h"
#include "MalformedData.h"
#include "Account.h"
using namespace std;

Account::Account(int accountNo, string name, int balance) 
{ 
	this->accountNo = accountNo; 
	this->name = name; 
	this->balance = balance; 
}

void Account::deposit()
{
	int amount; 
	cout << "입금액>>"; 
	cin >> amount;
	
	if (amount < 0)
		throw MalformedData("오류: 잘못된 금액입니다");

	cout << "입금 결과>>" << balance + amount << endl;
}

int Account::withdraw()
{
	int amount; 
	cout << "출금액>>"; 
	cin >> amount;
 
	if (amount < 0)
		throw MalformedData("오류: 잘못된 금액입니다");

	if (balance < amount)
		throw BalanceOutOfBoundsException("인출오류: 잔액을 초과하였습니다");
	
	cout << "인출 결과>>" << balance - amount << endl;

	return amount;
}
