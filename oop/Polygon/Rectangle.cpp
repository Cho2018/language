#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(double width, double height, char* type):Polygon(width, height, type)
{
	this->type = "Rectangle";
}

double Rectangle::GetArea()
{	
	cout << "����: " << width * height << endl;

	return width * height;
}

bool Rectangle::IsSquare()
{
	if (width == height)
	{
		cout << "���簢�� ����" << endl;

		return true;
	}

	else
	{
		cout << "���簢�� �������� ����" << endl;

		return false;
	}
}