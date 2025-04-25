#include<iostream>

#include "Person.h"

using namespace std;

Person::Person(const char* n, int a) {

	buildObject(n, a);

	//int size = length(n);

	//name = new char[size + 1];

	//strncpy(name, n, size);
}

Person::Person(const Person& p) {

	buildObject(p.name, p.age);
}

Person& Person::operator=(const Person& p) {

	if (this != &p) {

		delete[] name;
		buildObject(p.name, p.age);
	}

	return *this;
}

Person::~Person() {

	if (name)
		delete[]name;
}

int Person::length(const char* s) {

	int len = 0;

	if (s == nullptr)
		return len;

	for (; s[len] != '\0'; len++);

	return len;
}

void Person::strncpy(char* des, const char* src, int len) {

	for (int i = 0; i < len; i++) {

		des[i] = src[i];
	}

	des[len] = '\0';
}

void Person::buildObject(const char *n, const int a) {

	int size = length(n);

	name = new char[size + 1];

	strncpy(name, n, size);

	age = a;
}

void Person::print() const {

	cout << "Name: " << name << "\t" << "Age: " << age << endl;
}