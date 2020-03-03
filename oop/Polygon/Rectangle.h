#ifndef _Rectangle_h
#define _Rectangle_h
#include "Polygon.h"

class Rectangle: public Polygon
{
public:
	Rectangle(double width, double height, char* type);

	double GetArea();
	bool IsSquare();
};

#endif
