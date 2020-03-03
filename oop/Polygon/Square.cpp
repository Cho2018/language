#include <iostream>
#include "Square.h"
using namespace std;

Square::Square(double width, double height, char* type): Rectangle(width, height, type)
{
	this->width = width;
	this->height = width;
	this->type = "Square";
}

double Square::GetArea()
{
	cout << ": " << width * height << endl;

	return width * height;
}
