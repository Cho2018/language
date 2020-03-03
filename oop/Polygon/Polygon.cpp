#include <iostream>
#include "Polygon.h"
using namespace std;

Polygon::Polygon(double width, double height, char* type)
{
	this->width = width;
	this->height = height;
	this->type = type;
}

void Polygon::ShowInfo()
{
	cout << "종류: " << type << endl;
	cout << "폭: " << width << endl;
	cout << "높이: " << height << endl;
}
