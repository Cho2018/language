#ifndef _CheckingTrafficCardAccount_h
#define _CheckingTrafficCardAccount_h
#include "CheckingAccount.h"

class CheckingTrafficCardAccount: public CheckingAccount
{
	bool hasTrafficCard;

public:
	CheckingTrafficCardAccount(int accountNo, String name, int balance, String cardNo, bool hasTrafficCard);

	int payTrafficCard(String cdNo, int amount);
};

#endif