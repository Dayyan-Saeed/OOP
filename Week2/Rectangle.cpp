#include"Rectangle.h"
#include<iostream>

using namespace std;

float Rectangle::area() {

	return h * w;
}

float Rectangle::parameter() {

	return (h + w) * 2;
}


void Rectangle::displayArea() {
	cout << "Area is: " << area() << endl;
}

void Rectangle::displayParameter() {
	cout << "Parameter is: " << parameter() << endl;
}