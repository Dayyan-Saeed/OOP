#include"Rectangle.h"
#include<iostream>

using namespace std;

Rectangle::Rectangle() {

	setlength(0);
	setwidth(0);
}

Rectangle::Rectangle(int le, int wi) {

	setlength(le);
	setwidth(wi);
}
Rectangle::Rectangle(Rectangle & nR) {

	setlength(nR.getLength());
	setwidth(nR.getWidth());
}

void Rectangle::printAddress() {

	cout << "Address of l is: " << l<< endl
		<< "Address of w is: " << w << endl;
}

void Rectangle::setlength(int le) {

	if (l == nullptr) {
		l = new int;
	}

	*l = le;

	cout << "the value of l is: " << *l << endl;
}

void Rectangle::setwidth(int wi) {

	if (w == nullptr) {
		w = new int;
	}
	*w = wi;
	cout << "the value of w is: " << *w << endl; 
}

void Rectangle::setData(int le, int wi) {

	setlength(le);
	setwidth(wi);
}

int Rectangle::getLength() {

	return *l;
}

int Rectangle::getWidth() {

	return *w;
}
