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
	cout << "사과 장수: " << endl;
	cout << "남은 사과: " << numOfApple << "개" << endl;
	cout << "판매 수익: " << money << "원" << endl;
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
	cout << "나(구매자): " << endl;
	cout << "구매한 사과: " << numOfApple << "개" << endl;
	cout << "남은 금액: " << money << "원" << endl;
}