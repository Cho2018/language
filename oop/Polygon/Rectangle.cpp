#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(double width, double height, char* type):Polygon(width, height, type)
{
	this->type = "Rectangle";
}

double Rectangle::GetArea()
{	
	cout << "넓이: " << width * height << endl;

	return width * height;
}

bool Rectangle::IsSquare()
{
	if (width == height)
	{
		cout << "정사각형 성립" << endl;

		return true;
	}

	else
	{
		cout << "정사각형 성립하지 않음" << endl;

		return false;
	}
}