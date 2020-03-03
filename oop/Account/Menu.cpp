#include <iostream>
#include "Menu.h"
#include "AccountManager.h"
#include "Account.h"
using std::cout;
using std::cin;
using std::endl;

void Menu::ShowMenu()
{
	cout << "계좌 관리 시스템(1단계)" << endl;
	cout << "=======================" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 전체 계좌정보 출력" << endl;
	cout << "5. 특정 계좌 조회" << endl;
	cout << "6. 계좌 해지" << endl;
	cout << "7. 종료" << endl;
	cout << "=======================" << endl;
}

int Menu::InputMenu()
{
	cout << "선택: ";
	cin >> menu;

	if(menu < '1' || menu > '7')
	{
		cout << "다시 입력하시오: ";
		InputMenu();
	}
	
	return menu;
}