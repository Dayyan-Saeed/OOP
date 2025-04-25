#include<iostream>
#include"Rectangle.h"

using namespace std;

void main() {

	Rectangle rect1;
	Rectangle rect2(4, 4);
	Rectangle rect3(rect2);

	rect1.printAddress();
	rect2.printAddress();
	rect3.printAddress();

	rect1.setlength(5);

	cout << "the value of l is: " << rect1.getLength() << endl;

	rect1.setlength(7);

	cout << "the value of l is: " << rect1.getLength() << endl;
}