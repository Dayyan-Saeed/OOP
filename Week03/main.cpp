#include<iostream>
#include"Rectangle.h"

using namespace std;

void main() {

	Rectangle rect1;
	Rectangle rect2(4, 4);
	Rectangle rect3(5, 6, 0, 0);

	cout << "size of rect1:" << sizeof(rect1) << endl;
	cout << "size of rect2:" << sizeof(rect2) << endl;
	cout << "size of rect3:" << sizeof(rect3) << endl;

	Rectangle reactArray[5];
	Rectangle* rectptr = new Rectangle(3, 3);

	cout << "size of rectptr:" << sizeof(*rectptr) << endl;

	Rectangle* rectptrc = new Rectangle[5];

	cout << "size of rectptrc:" << sizeof(*(rectptrc+5)) << endl;

	cout << "rectptrc:" << rectptrc << endl;
	cout << "rectptrc+1:" << rectptrc+1 << endl;
	cout << "rectptrc+2:" << rectptrc+2 << endl;
	cout << "rectptrc+3:" << rectptrc+3 << endl;
	cout << "rectptrc+4:" << rectptrc+4 << endl;

	rectptr->displayArea();
	rectptr->displayParameter();
	//rect.area()

	for (int i = 0; i < 5; i++) {
		(reactArray+i)->setData(9, 8, 0, 0);
	}

	for (int i = 0; i < 5; i++) {
		reactArray[i].displayArea();
		reactArray[i].displayParameter();
	}

	rect1.displayArea();
	rect1.displayParameter();
	rect2.displayArea();
	rect2.displayParameter();
	rect3.displayArea();
	rect3.displayParameter();

	rect1.setData(2, 2, 0, 0);
	rect2.setData(10, 10, 0, 0);
	rect3.setData(20, 20, 0, 0);

	rect1.displayArea();
	rect1.displayParameter();
	rect2.displayArea();
	rect2.displayParameter();
	rect3.displayArea();
	rect3.displayParameter();

}