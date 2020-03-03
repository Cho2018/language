#ifndef _CheckingAccount_h
#define _CheckingAccount_h
#include "Account.h"

class CheckingAccount: public Account
{
protected:
	String cardNo;

public:
	CheckingAccount(int accountNo, String name, int balance, String cardNo);

	int pay(String cardNo, int amount);
};

#endif
