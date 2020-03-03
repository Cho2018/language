#include <iostream>
#include "MyException.h"
using namespace std;

MyException::MyException(string msg)
{
	this->msg = msg;
}

string MyException::getMessage()
{
	return msg;
}

void MyException::Print()
{
	cout << msg << endl;
}
