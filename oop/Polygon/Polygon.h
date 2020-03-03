#ifndef _Polygon_h
#define _Polygon_h

class Polygon
{
protected:
	double width;
	double height;
	char* type;

public:
	Polygon(double width, double height, char* type);

	void ShowInfo();
	virtual double GetArea() = 0;
};

#endif
