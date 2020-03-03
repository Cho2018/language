#include <iostream>
#include "BonusPointAccount.h"
using namespace std;

BonusPointAccount::BonusPointAccount(int accountNo, String name, int balance, int bonusPoint): Account(accountNo, name, balance)
{
	this->bonusPoint = bonusPoint;
}

void BonusPointAccount::deposit(int amount)
{
	balance = balance + amount;
	bonusPoint = bonusPoint + amount * 0.1;

	cout << "[예금]" << endl;
	cout << "예금액: " << amount << endl;
	cout << "예금 결과: " << balance << endl;
}

void BonusPointAccount::check()
{
	cout << "[잔액조회]" << endl;
	cout << "계좌번호: " << accountNo << endl;
	cout << "이름: ";
	name.Get();
	cout << endl;
	cout << "잔액: " << balance << endl;
	cout << "누적 포인트: " << bonusPoint << endl;
}
