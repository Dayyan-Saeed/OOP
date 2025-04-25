#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
	num = 0;
	den = 1;
}

Fraction::Fraction(int n) {

	num = n;
	den = 1;
}

Fraction::Fraction(int n, int d) {

	num = n;
	if (d==0)
		den = 1;

	den = d;
}

void Fraction::display() {

	cout << num << "/" << den << endl;
}

void Fraction::reduce() {


}

void Fraction::setnum(int n) {

	num = n;
}

void Fraction::setden(int d) {

	if (d != 0)
		den = d;
}

int Fraction::getnum() {

	return num;
}

int Fraction::getden() {

	return den;
}

Fraction Fraction::add(const Fraction &obj) {

	Fraction result;

	result.num = num * obj.den + den * obj.num;
	result.den = den * obj.den;

	return result;
}

Fraction Fraction::sub(const Fraction &obj) {

	Fraction result;

	result.num = num * obj.den - den * obj.num;
	result.den = den * obj.den;

	return result;
}

Fraction Fraction::mul(const Fraction &obj) {

	Fraction result;

	result.num = num * obj.num;
	result.den = den * obj.den;

	return result;
}

Fraction Fraction::div(const Fraction &obj) {

	Fraction result;

	result.num = num * obj.den;
	result.den = den * obj.num;

	return result;
}

Fraction Fraction::operator+(const Fraction &obj) {

	Fraction result;

	result.num = num * obj.den + den * obj.num;
	result.den = den * obj.den;

	return result;
}

Fraction Fraction::operator-(const Fraction &obj) {

	Fraction result;

	result.num = num * obj.den - den * obj.num;
	result.den = den * obj.den;

	return result;
}

Fraction Fraction::operator*(const Fraction &obj) {

	Fraction result;

	result.num = num * obj.num;
	result.den = den * obj.den;

	return result;
}

Fraction Fraction::operator/(const Fraction & obj) {

	Fraction result;

	result.num = num * obj.den;
	result.den = den * obj.num;

	//obj.den = 4; ERROR

	return result;
}

bool Fraction::operator==(const Fraction& obj) {

	return num == obj.num && den == obj.den;
}

bool Fraction::operator!=(const Fraction& obj) {

	return !(*(this) == obj);
	//return !operator==(obj);
}

bool Fraction::operator<=(const Fraction& obj) {

	return *(this) == obj && *(this) < obj;
}

bool Fraction::operator>=(const Fraction& obj) {

	return !(*(this) < obj);
}

bool Fraction::operator<(const Fraction& obj) {

	return num * obj.den < den* obj.num;
}

bool Fraction::operator>(const Fraction& obj) {

	return !(*(this) == obj || *(this) < obj);
}

