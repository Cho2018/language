#include <iostream>
#include "AccountManager.h"
#include "Account.h"
using std::cout;
using std::endl;

void AccountManager::MakeAccount()
{
	cout << "[계좌개설]" << endl;
	
	int accountNo;
	cout << "계좌번호: ";
	cin >> accountNo;

	string name;
	cout << "소유주: ";
	cin >> name;
	
	int balance;
	cout << "잔액: ";
	cin >> balance;

	pList[size] = new Account(accountNo, name, balance);
	size++;
	
	cout << "[계좌개설 완료]" << endl;
}

void AccountManager::EraseAccount()
{
	cout << "[계좌해지]" << endl;
	
	int accountNo;
	cout << "계좌번호: ";
	cin >> accountNo;

	string name;
	cout << "소유주: ";
	cin >> name;

	cout << "[계좌해지 완료]" << endl;

	for(int i=0; i < size; i++) 
	{
		if(pList[i]->GetAccoutNo() == accountNo) 
		{
			delete pList[i];
			
			for(int j = i + 1; j < size; j++) 
			{
				pList[j - 1] = pList[j];
			} 
			size--;
		}
	}
}

void AccountManager::Deposit()
{
	cout << "[입금]" << endl;

	int accountNo;
	cout << "계좌번호: ";
	cin >> accountNo;

	int money;
	
	for(int i = 0; i < size; i++) 
	{
		if(pList[i]->GetAccoutNo() == accountNo) 
		{
			cout << "입금액: ";
			cin >> money;

			pList[i]->Input(money);

			break;
		}

		else
			cout << "일치하는 계좌가 존재하지 않습니다." << endl;
	}

	cout << "[입금 완료]" << endl;
}

void AccountManager::Withdraw()
{
	cout << "[출금]" << endl;

	int accountNo;
	cout << "계좌번호: ";
	cin >> accountNo;

	int money;

	for(int i = 0; i < size; i++) 
	{
		if(pList[i]->GetAccoutNo() == accountNo) 
		{
			cout << "출금액: ";
			cin >> money;
			
			pList[i]->Output(money);
			
			break;
		}
		
		else 
			cout << "일치하는 계좌가 존재하지 않습니다." << endl;
	}
	
	cout << "[출금 완료]" << endl;
}

void AccountManager::OneResult() const 
{
	cout << "[특정 계좌 조회]" << endl;

	int accountNo;
	cout << "계좌번호 입력: ";
	cin >> accountNo;
	
	for(int i = 0; i < size; i++)
	{
		if(pList[i]->GetAccoutNo() == accountNo)
		{
			pList[i]->ShowResult();

			break;
		}

		else
			cout << "일치하는 계좌가 존재하지 않습니다." << endl;
	}

	cout << "[특정 계좌 조회 완료]" << endl;
}

void AccountManager::EntireResult() const
{
	cout << "[전체 계좌 조회]" << endl;	
	
	for(int i = 0; i < size; i++) 
	{
		pList[i]->ShowResult();
	}
	
	cout << "[전체 계좌 조회 완료]" << endl;
}
