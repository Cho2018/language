#include <iostream>
#include "Menu.h"
#include "AccountManager.h"
#include "Account.h"
using std::cout;
using std::cin;
using std::endl;

void Menu::ShowMenu()
{
	cout << "���� ���� �ý���(1�ܰ�)" << endl;
	cout << "=======================" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. ��ü �������� ���" << endl;
	cout << "5. Ư�� ���� ��ȸ" << endl;
	cout << "6. ���� ����" << endl;
	cout << "7. ����" << endl;
	cout << "=======================" << endl;
}

int Menu::InputMenu()
{
	cout << "����: ";
	cin >> menu;

	if(menu < '1' || menu > '7')
	{
		cout << "�ٽ� �Է��Ͻÿ�: ";
		InputMenu();
	}
	
	return menu;
}