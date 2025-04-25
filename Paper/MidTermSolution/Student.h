#pragma once
#include<iostream>

using namespace std;

class Student
{
	char* Name;
	int semester;
	double CGPA;
	double scholarship;

	int length(const char* eptr);
	void copyData(const Student&);

	/*Following Code is for Question 03*/
	static const char* University;

public:
	Student(const char*, int, double, double);

	/*Following Code is for Question 01*/
	Student(const Student&);

	~Student();

	Student& operator=(const Student&);
	friend ostream& operator<<(ostream&, const Student&);

	/*Following Code is for Question 02*/
	Student operator++(int);

	char& operator[](int) const;

	/*Following Code is for Question 03*/
	Student();
};

