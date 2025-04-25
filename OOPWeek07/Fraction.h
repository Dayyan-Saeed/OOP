#pragma once
//#include <iostream>
//using namespace std;

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

	bool operator==(const Fraction&);
	bool operator!=(const Fraction&);
	bool operator<=(const Fraction&);
	bool operator>=(const Fraction&);
	bool operator<(const Fraction&);
	bool operator>(const Fraction&);

	//friend Fraction add(const Fraction&, const Fraction&);
	//friend Fraction sub(const Fraction&, const Fraction&);
	//friend Fraction mul(const Fraction&, const Fraction&);
	//friend Fraction div(const Fraction&, const Fraction&);

	friend Fraction operator+(const Fraction&, const Fraction&);
	friend Fraction operator-(const Fraction&, const Fraction&);
	friend Fraction operator*(const Fraction&, const Fraction&);
	friend Fraction operator/(const Fraction&, const Fraction&);

	friend bool operator==(Fraction&, Fraction&);
	friend bool operator!=(Fraction&, Fraction&);
	friend bool operator<=(Fraction&, Fraction&);
	friend bool operator>=(Fraction&, Fraction&);
	friend bool operator<(Fraction&, Fraction&);
	friend bool operator>(Fraction&, Fraction&);

};
