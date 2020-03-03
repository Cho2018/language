#include <iostream>
#include "FruitTrade.h"

using namespace std;

int FruitBuyer::SaleApple(int m)
{
	const int APPLE_UNITCOST = 500;

	int num = m / APPLE_UNITCOST;

	numOfApple -= num;
	money += m;

	return num;
}

void FruitBuyer::ShowResult1()
{
	cout << "��� ���: " << endl;
	cout << "���� ���: " << numOfApple << "��" << endl;
	cout << "�Ǹ� ����: " << money << "��" << endl;
}

int FruitBuyer::BuyApple(int m)
{
	const int APPLE_UNITCOST = 500;

	int num = m / APPLE_UNITCOST;

	numOfApple += num;
	money -= m;

	return num;
}

void FruitBuyer::ShowResult2()
{
	cout << "��(������): " << endl;
	cout << "������ ���: " << numOfApple << "��" << endl;
	cout << "���� �ݾ�: " << money << "��" << endl;
}