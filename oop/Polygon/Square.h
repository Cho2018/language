#ifndef _Square_h
#define _Square_h
#include "Rectangle.h"

class Square: public Rectangle
{
public:
	Square(double width, double height, char* type);
 
	double GetArea();
};

#endif
