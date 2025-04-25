#include<iostream>

#include "String.h"

using namespace std;

String::String() {

	str = nullptr;
	len = 0;
}

String::String(const char *str) {

	int count = 0;
	
	while (str[count] != '\0') {
		
		count++;
	}

	if (this->str != nullptr) {

		delete[] this->str;
		this->str = nullptr;
	}

	this->str = new char[count + 1];

	for (int i = 0; i < count; i++) {

		this->str[i] = str[i];
	}
		
	this->str[count] = '\0';
	this->len = count;
}

String::String(const char *str, int len) {

	this->str = nullptr;
	this->len = 0;

	//Write the appropriate code
}

String String::operator+(const String&s) {

	String nstr;

	int i = 0, j = 0;

	nstr.str = new char[this->len + s.len + 1];

	for (; i < this->len; i++, j++) {

		nstr.str[j] = this->str[i];
	}

	for (i = 0; i < s.len; i++, j++) {

		nstr.str[j] = s.str[i];
	}

	nstr.str[j] = '\0';
	nstr.len = j;

	return nstr;
}

void String::display() {

	for (int i = 0; i < len; i++) {

		cout << str[i];
	}

	cout << endl << "Printing Again: " << str << endl;
}