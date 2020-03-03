#include <iostream> 
#include "Complex.h" 
using std::cout;  
using std::endl; 

void Complex::SetComplex(double real, double image)
{
	this->real = real;
	this->image = image;
}

double Complex::GetReal() const
{
	return real;
}

double Complex::GetImage() const
{
	return image;
}

void Complex::ShowComplex() const
{
	cout << real << " + " << image << "i" << endl;
}
