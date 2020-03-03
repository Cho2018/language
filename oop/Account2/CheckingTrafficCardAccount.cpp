#include <iostream>
#include "CheckingTrafficCardAccount.h"
using namespace std;

CheckingTrafficCardAccount::CheckingTrafficCardAccount(int accountNo, String name, int balance, String cardNo, bool hasTrafficCard): CheckingAccount(accountNo, name, balance, cardNo)
{
	this->hasTrafficCard = hasTrafficCard;
}

int CheckingTrafficCardAccount::payTrafficCard(String cdNo, int amount)
{
	cout << "[교통카드]" << endl;

	if (hasTrafficCard == true)
	{
		balance = balance - amount;
		
		cout << "교통카드 등록" << endl;
		cout << "지불 금액: " << amount << endl;
		
		return amount;
	}

	else
	{
		cout << "교통카드 미등록" << endl;
		
		return 0;
	}
}		
