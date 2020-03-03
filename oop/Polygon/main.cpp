#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
using namespace std;

int main()
{
	Polygon* shapes[10];

	shapes[0] = new Rectangle(2.0, 5.5, "Rectangle");
	shapes[1] = new Triangle(4.0, 5.5, "Triangle");
	shapes[2] = new Square(2.0, 2.0, "Square");

	for (int i = 0; i < 3; i++)
	{
		shapes[i]->ShowInfo();
		shapes[i]->GetArea();

		Rectangle* r;
		r = dynamic_cast<Rectangle *>(shapes[i]);

		if (r != NULL)
			((Rectangle *) shapes[i])->IsSquare();

		else
			cout << "사각형이 아님" << endl;
	}

	return 0;
}
