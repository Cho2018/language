#ifndef _Triangle_h
#define _Triangle_h
#include "Polygon.h"

class Triangle: public Polygon
{
public:
	Triangle(double width, double height, char* type);

	double GetArea();
};

#endif

