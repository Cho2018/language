#include "Complex.h"

class ComplexList
{
	Complex* pList;
	int NLIST;

public:
	ComplexList(int s = 10);
	~ComplexList();
	
	void Set(int n, double real, double image);
	Complex& Get(int n);
	int Length();
};
