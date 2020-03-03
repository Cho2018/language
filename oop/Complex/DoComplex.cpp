#include <iostream>
#include "Complex.h"
using std::cout;
using std::cin;
using std::endl;

void InputComplex(Complex& complex)
{
	double real;
	double image;

	cout << "�Ǽ� �κ��� �Է��Ͻÿ�: ";
	cin >> real;
		
	cout << "��� �κ��� �Է��Ͻÿ�: ";
	cin >> image;

	complex.SetComplex(real, image);
}

int main()
{
	Complex complex1, complex2;
	
	cout << "1�� �Է�: ";
	InputComplex(complex1);
	cout << "2�� �Է�: ";
	InputComplex(complex2);
         
	cout << "���Ҽ� 1: ";
	complex1.ShowComplex();
	cout << "���Ҽ� 2: ";
	complex2.ShowComplex();
	
	return 0;
}