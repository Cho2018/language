#include "FruitTrade.h"

int main(void)
{
	FruitBuyer seller;

	seller.numOfApple = 20;
	seller.money = 0;

	seller.SaleApple(2000);
	seller.ShowResult1();
	
	FruitBuyer buyer;

	buyer.numOfApple = 0;
	buyer.money = 5000;

	buyer.BuyApple(2000);
	buyer.ShowResult2();

	return 0;
}