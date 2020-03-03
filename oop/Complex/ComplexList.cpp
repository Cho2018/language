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
		cout << "�迭�� ũ�⿡�� �����" << endl;
}

Complex& ComplexList::Get(int n)
{
	if (n <= NLIST)
		return pList[n];
		
	else
		cout << "��ȯ �Ұ�" << endl;
}

int ComplexList::Length()
{
	return NLIST;
}