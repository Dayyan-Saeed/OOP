#include<iostream>

#include"Person.h"
#include"Employee.h"

using namespace std;

void printDataE(Employee *empArr, int size) {

	for (int i = 0; i < size; i++) {

		empArr[i].print();
	}
}

void printData(Person* p, int size) {

	for (int i = 0; i < size; i++) {

		p[i].print();
	}
}

void printDataP(Person** pArr, int size) {

	for (int i = 0; i < size; i++) {

		pArr[i]->print();
	}
}

int main() {

	Person p1("Alif", 25),p2("Bay", 24),p3("Pay", 23);

	Employee e1("Altaf", 55, "Professor", 350000),
		e2("Bilal", 50, "Associate Professor", 300000),
		e3("Chaker", 45, "Associate Professor", 250000),
		e4("Dilawar", 40, "Assistant Professor", 225000),
		e5("Ehsaan", 35, "Lecturer", 170000);

	Employee e6 = e1, e7 = e2, e8 = e3, e9 = e4, e0 = e5;

	e4 = e8;

	e2[0] = 'O';

	//cout << e6 << e7 << e8 << e9 << e0;

	Employee empArr[5] = { e1, e2, e3, e4, e5 };

	Person mixArr[5] = { e1, e3, e5, p1, p2 };

	Person *pArr[5]{ empArr };

	Person* pArrAd[3] = { &e2, &e4, &p3 };

	printDataE(empArr, 5);
	//printData(empArr, 5);
	printData(mixArr, 5);
	//printDataP(pArr, 5);
	printDataP(pArrAd, 3);

	return 0;
}