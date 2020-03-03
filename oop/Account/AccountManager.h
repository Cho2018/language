#ifndef _AccountManager_h
#define _AccountManager_h
#include "Account.h"

class AccountManager
{
	Account* pList[100];
	int size;

public:
	AccountManager() {size = 0;}

	void MakeAccount();
	void EraseAccount();

	void Deposit();
	void Withdraw();

	void OneResult() const;
	void EntireResult() const;
};

#endif