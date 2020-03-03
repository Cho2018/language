#ifndef _BonusPointAccount_h
#define _BonusPointAccount_h
#include "Account.h"

class BonusPointAccount: public Account
{
	int bonusPoint;

public:
	BonusPointAccount(int accountNo, String name, int balance, int bonusPoint);

	void deposit(int);
	void check();
};

#endif
