#ifndef _String_h
#define _String_h

class String
{
	char* string;
	int length;

public:
	String() {string = NULL, length = 0;}
	String(char*);
	String(const String& str);
	~String();

	void Get();
	void Get(int n);
	void Set(int n, char);
	int Length();

	String& operator=(String&);
	String operator+(const String&) const;
	bool operator==(const String&) const;
};

#endif
