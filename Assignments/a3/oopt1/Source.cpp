#include <iostream>

#include"Pet.h"
#include"Dog.h"

using namespace std;

void callPrint(Pet& p) {

	p.print();
}

void callPrintPtr(Pet* p) {

	p->print();
}

void callPrintObj(Pet p) {

	p.print();
}

int main()
{
	Pet p("Puppy");
	Dog d("Crazy", "German Shepherd");

	p.print();
	d.print();

	cout << "\n*** Calling the function callPrint ***" << endl;

	callPrint(p);
	callPrint(d);

	cout << "\n*** Calling the function callPrintPtr ***" << endl;

	callPrintPtr(&p);
	callPrintPtr(&d);

	cout << "\n*** Calling the function callPrintObj ***" << endl;

	callPrintObj(p);
	callPrintObj(d);

	return 0;
}