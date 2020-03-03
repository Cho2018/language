#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;

String::String(char* str)
{
	length = strlen(str) + 1;
	string = new char[length];
	
	strcpy(string, str);
}

String::String(const String& str)
{
	this->length = str.length;
	this->string = new char[length];
	
	strcpy(string, str.string);
}

String::~String()
{
	delete [] string;
}

void String::Get()
{
	cout << string;
}

void String::Get(int n)
{
	cout << string[n];
}

void String::Set(int n, char a)
{
	string[n] = a;
}

int String::Length()
{
	return length;
}

String& String::operator=(String& str)
{
	this->length = str.length;
	delete [] this->string;
	this->string = new char[length];

	strcpy(string, str.string);

	return *this;
}

String String::operator+(const String& str) const
{
	char* nStr = new char[length + str.length - 1];

	strcpy(nStr, string);
	strcat(nStr, str.string);
	
	String m(nStr);
	delete [] nStr;
	
	return m;
}

bool String::operator==(const String& str) const
{
	return strcmp(string, str.string); 
}
