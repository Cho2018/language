#ifndef _Complex_h
#define _Complex_h

class Complex
{
	double real;
	double image;

public:
	void SetComplex(double real, double image);  
        
	double GetReal() const;
	double GetImage() const;
	
	void ShowComplex() const;
};

#endif