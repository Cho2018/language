#ifndef _Account_h
#define _Account_h
#include <string>
using namespace std;

class Account
{
	int accountNo;
	string name;
	int balance;

public:
	Account(int accountNo, string name, int balance);
	
	void SetAccountNo(int);
	void SetName(string);
	void SetBalance(int);
	int GetAccoutNo() {return accountNo;}
	string GetName() {return name;}
	int GetBalance() {return balance;}

	void Input(int);
	void Output(int);
	void ShowResult() const;
};

#endif