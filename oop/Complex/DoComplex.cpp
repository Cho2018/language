#include <iostream>
#include "Complex.h"
using std::cout;
using std::cin;
using std::endl;

void InputComplex(Complex& complex)
{
	double real;
	double image;

	cout << "실수 부분을 입력하시오: ";
	cin >> real;
		
	cout << "허수 부분을 입력하시오: ";
	cin >> image;

	complex.SetComplex(real, image);
}

int main()
{
	Complex complex1, complex2;
	
	cout << "1차 입력: ";
	InputComplex(complex1);
	cout << "2차 입력: ";
	InputComplex(complex2);
         
	cout << "복소수 1: ";
	complex1.ShowComplex();
	cout << "복소수 2: ";
	complex2.ShowComplex();
	
	return 0;
}