#include <iostream>
#include "AccountManager.h"
#include "Account.h"
using std::cout;
using std::endl;

void AccountManager::MakeAccount()
{
	cout << "[���°���]" << endl;
	
	int accountNo;
	cout << "���¹�ȣ: ";
	cin >> accountNo;

	string name;
	cout << "������: ";
	cin >> name;
	
	int balance;
	cout << "�ܾ�: ";
	cin >> balance;

	pList[size] = new Account(accountNo, name, balance);
	size++;
	
	cout << "[���°��� �Ϸ�]" << endl;
}

void AccountManager::EraseAccount()
{
	cout << "[��������]" << endl;
	
	int accountNo;
	cout << "���¹�ȣ: ";
	cin >> accountNo;

	string name;
	cout << "������: ";
	cin >> name;

	cout << "[�������� �Ϸ�]" << endl;

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
	cout << "[�Ա�]" << endl;

	int accountNo;
	cout << "���¹�ȣ: ";
	cin >> accountNo;

	int money;
	
	for(int i = 0; i < size; i++) 
	{
		if(pList[i]->GetAccoutNo() == accountNo) 
		{
			cout << "�Աݾ�: ";
			cin >> money;

			pList[i]->Input(money);

			break;
		}

		else
			cout << "��ġ�ϴ� ���°� �������� �ʽ��ϴ�." << endl;
	}

	cout << "[�Ա� �Ϸ�]" << endl;
}

void AccountManager::Withdraw()
{
	cout << "[���]" << endl;

	int accountNo;
	cout << "���¹�ȣ: ";
	cin >> accountNo;

	int money;

	for(int i = 0; i < size; i++) 
	{
		if(pList[i]->GetAccoutNo() == accountNo) 
		{
			cout << "��ݾ�: ";
			cin >> money;
			
			pList[i]->Output(money);
			
			break;
		}
		
		else 
			cout << "��ġ�ϴ� ���°� �������� �ʽ��ϴ�." << endl;
	}
	
	cout << "[��� �Ϸ�]" << endl;
}

void AccountManager::OneResult() const 
{
	cout << "[Ư�� ���� ��ȸ]" << endl;

	int accountNo;
	cout << "���¹�ȣ �Է�: ";
	cin >> accountNo;
	
	for(int i = 0; i < size; i++)
	{
		if(pList[i]->GetAccoutNo() == accountNo)
		{
			pList[i]->ShowResult();

			break;
		}

		else
			cout << "��ġ�ϴ� ���°� �������� �ʽ��ϴ�." << endl;
	}

	cout << "[Ư�� ���� ��ȸ �Ϸ�]" << endl;
}

void AccountManager::EntireResult() const
{
	cout << "[��ü ���� ��ȸ]" << endl;	
	
	for(int i = 0; i < size; i++) 
	{
		pList[i]->ShowResult();
	}
	
	cout << "[��ü ���� ��ȸ �Ϸ�]" << endl;
}
