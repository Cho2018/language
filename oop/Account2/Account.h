#ifndef _Account_h
#define _Account_h
#include "String.h"

class Account
{
protected:
	int accountNo;
	String name;
	int balance;

public:
	Account(int accountNo, String name, int balance);

	void deposit(int);
	int withdraw(int);
	void check();
};

#endif
