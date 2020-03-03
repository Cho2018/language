#ifndef _BalanceOutOfBoundsException_h
#define _BalanceOutOfBoundsException_h
#include "MyException.h"

class BalanceOutOfBoundsException: public MyException
{
public:
	BalanceOutOfBoundsException(string msg);
};

#endif
