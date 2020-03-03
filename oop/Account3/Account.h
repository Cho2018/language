#ifndef _Account_h
#define _Account_h
#include <string>

class Account
{
	int accountNo;
	string name;
	int balance;

public:
	Account(int accoutNo, string name, int balance);
	
	void deposit();
	int withdraw();
};

#endif
