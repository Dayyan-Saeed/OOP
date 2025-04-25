#pragma once
#include<iostream>
using namespace std;

class Pet
{
	char *name;
	void buildObject(const Pet& p);

protected:

	void strncpy(char*, const char*, int);
	int length(const char*);

public:

	Pet(const char*);
	Pet(const Pet&);

	~Pet();

	virtual void print()const;
};