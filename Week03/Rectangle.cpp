#include"Rectangle.h"
#include<iostream>

using namespace std;

float Rectangle::area() {

	return l * w;
}

float Rectangle::parameter() {

	return (l + w) * 2;
}

Rectangle::Rectangle() {

	setLenght(0);
	setWidth(0);
	setOriginX(1);
	setOriginY(1);
}

Rectangle::Rectangle(float le, float wi) {

	setLenght(le);
	setWidth(wi);
	setOriginX(5);
	setOriginY(6);
}

Rectangle::Rectangle(float le, float wi, float x, float y) {
	
	setLenght(le);
	setWidth(wi);
	setOriginX(x);
	setOriginY(y);
}

void Rectangle::displayArea() {
	cout << "Area is: " << area() << endl;
}

void Rectangle::displayParameter() {
	cout << "Parameter is: " << parameter() << endl;
}

void Rectangle::setLenght(float le) {

	l = le;
}

void Rectangle::setWidth(float wi) {

	w = wi;
}

void Rectangle::setOriginX(float x) {

	orx = x;
}

void Rectangle::setOriginY(float y) {

	ory = y;
}

void Rectangle::setData(float le, float wi, float x, float y) {

	setLenght(le);
	setWidth(wi);
	setOriginX(x);
	setOriginY(y);
}

float Rectangle::getLength() {

	return l;
}

float Rectangle::getWidth() {

	return w;
}

float Rectangle::getOriginX() {

	return orx;
}

float Rectangle::getOriginY() {

	return ory;
}
