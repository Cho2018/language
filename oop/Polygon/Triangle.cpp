#include <iostream>
#include "Triangle.h"
using namespace std;

Triangle::Triangle(double width, double height, char* type): Polygon(width, height, type)
{
	this->type = "Triangle";
}

double Triangle::GetArea()
{
	cout << "넓이: " << (width * height) / 2 << endl;

	return (width * height) / 2;
}
