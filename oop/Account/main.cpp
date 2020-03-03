#include <iostream>
#include "Menu.h"
#include "AccountManager.h"
#include "Account.h"

int main()
{
	AccountManager a;
	Menu m;

	int number;

	do
	{
		m.ShowMenu();
		number = m.InputMenu();

		switch(number)
		{
		case '1':
			a.MakeAccount();
			break;
		
		case '2':
			a.Deposit();
			break;
		
		case '3':
			a.Withdraw();
			break;

		case '4':
			a.EntireResult();
			break;

		case '5':
			a.OneResult();
			break;
		
		case '6':
			a.EraseAccount();
			break;
		
		case '7':
			break;
		
		default:
			;
		}
	} while(number >= '1' && number <= '6');
	
	return 0;
}
