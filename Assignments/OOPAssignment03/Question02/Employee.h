#pragma once
#include<iostream>

#include "Person.h"

using namespace std;

class Employee:public Person {

	char* designation;
	double salary;

	friend ostream& operator<<(ostream&, Employee&);

public:

	void print()const;

	void builEmployee(const char*, const double);

	char& operator[](const int);

	Employee(const char*, const int, const char*, const double);
	Employee(const Employee&);
	Employee& operator=(const Employee&);

	~Employee();
};

ostream& operator<<(ostream& os, Employee& e);
