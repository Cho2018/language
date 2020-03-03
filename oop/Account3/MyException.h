#ifndef _MyException_h
#define _MyException_h
#include <string>

class MyException
{
protected:
	string msg;

public:
	MyException(string msg);
	
	string getMessage();
	void Print();
};

#endif
