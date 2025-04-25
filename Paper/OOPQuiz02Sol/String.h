#pragma once
class String
{
	char* str;
	int len;

public:

	String();
	String(const char *);
	String(const char *, int);

	String operator+(const String&);

	void display();
};

