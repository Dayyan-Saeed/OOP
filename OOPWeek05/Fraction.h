#pragma once
#include <iostream>
using namespace std;

class Fraction
{
	int num;
	int den;

public:

	Fraction();
	Fraction(int);
	Fraction(int, int);
	
	void display();

	void reduce();
	void setnum(int);
	void setden(int);

	int getnum();
	int getden();

	Fraction add(const Fraction&);
	Fraction sub(const Fraction&);
	Fraction mul(const Fraction&);
	Fraction div(const Fraction&);

	Fraction operator+(const Fraction&);
	Fraction operator-(const Fraction&);
	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);
};
