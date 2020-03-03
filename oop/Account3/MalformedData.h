#ifndef _MalformedData_h
#define _MalformedData_h
#include "MyException.h"

class MalformedData: public MyException
{
public:
	MalformedData(string msg);
};

#endif
