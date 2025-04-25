#pragma once

class Rectangle {

	int *l;
	int *w;

public:

	Rectangle();
	Rectangle(int, int);
	Rectangle(Rectangle &);

	void setlength(int);
	void setwidth(int);
	void setData(int, int);

	void printAddress();

	int getLength();
	int getWidth();
};