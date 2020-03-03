#ifndef _CreditLineAccount_h
#define _CreditLineAccount_h
#include "Account.h"

class CreditLineAccount: public Account
{
	int creditLine;

public:
	CreditLineAccount(int accountNo, String name, int balance, int creditLine);

	int withdraw(int);
};

#endif
