#pragma once

#include"Pet.h"

class Dog:public Pet
{
	char* breed;
	void buildObject(const Dog& d);

public:

	Dog(const char* n, const char* b);
	Dog(const Dog&);

	~Dog();

	void print()const;
};

