#include <iostream>
#include "MyException.h"
#include "BalanceOutOfBoundsException.h"
#include "MalformedData.h"
#include "Account.h"
using namespace std;
using std::cerr;

int main(void)
{
	Account a(2000, "test", 10000);
	
	try 
	{  
		cout << "[입금]" << endl;  
		a.deposit(); 
	} 
	catch(MalformedData& e) 
	{  
		cout << e.getMessage() << endl; 
	}
 
	try 
	{  
		cout << "[출금]" << endl;  
		a.withdraw(); 
	} 
	catch(MalformedData& e) 
	{  
		cout << e.getMessage() << endl; 
	} 
	catch(BalanceOutOfBoundsException& e) 
	{  
		cout << e.getMessage() << endl; 
	}

	cout << "[종료]" << endl;
 
	return 0; 
}
