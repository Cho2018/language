#include <iostream>
#include "ComplexList.h"
using std::cout;
using std::endl;

ComplexList::ComplexList(int s)
{
	NLIST = s;

	pList = new Complex[NLIST];
}

ComplexList::~ComplexList()
{
	delete [] pList;
}

void ComplexList::Set(int n, double real, double image)
{
	if (n <= NLIST)
		pList[n].SetComplex(real, image);
	
	else
		cout << "배열의 크기에서 벗어났음" << endl;
}

Complex& ComplexList::Get(int n)
{
	if (n <= NLIST)
		return pList[n];
		
	else
		cout << "반환 불가" << endl;
}

int ComplexList::Length()
{
	return NLIST;
}