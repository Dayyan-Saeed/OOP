#include "Employee.h"

Employee::Employee(const char* n, const int a, const char* d, const double s) : Person(n, a) {

	builEmployee(d, s);
}

Employee::Employee(const Employee& e) : Person(e) {

	builEmployee(e.designation, e.salary);
}

Employee::~Employee() {

	delete[]designation;
}

Employee& Employee::operator=(const Employee& e) {

	if (this != &e) {

		Person::operator=(e);

		delete[] designation;
		builEmployee(e.designation, e.salary);
	}

	return *this;
}

void Employee::builEmployee(const char*d, double s) {

	int size = length(d);

	designation = new char[size + 1];

	strncpy(designation, d, size);

	salary = s;
}

char& Employee::operator[](const int index) {

	return designation[index];
}

void Employee::print()const {

	Person::print();
	cout << "Designation: " << designation << "\t" << "Salary: " << salary << endl;
}

ostream& operator<<(ostream& os, Employee& e) {

	e.print();

	return os;
}