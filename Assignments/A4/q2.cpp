#include <iostream>
#include<string>
using namespace std;

class Employee {
protected:
	string firstName;
	char middleInitial;
	string lastName;
	string department;

public:

	Employee(string firstName, char middleInitial, string lastName, string department) {
		this->firstName = firstName;
		this->middleInitial = middleInitial;
		this->lastName = lastName;
		this->department = department;
	}
	virtual void printInfo() = 0;
};

class Manager : public Employee {
protected:
	int level;
public:
	Manager(string firstName, char middleInitial, string lastName, string department, int level) : Employee(firstName, middleInitial, lastName, department) {
		this->level = level;
	}
	void printInfo() {
		cout << firstName << " " << middleInitial << " " << lastName << " " << department << " " << level << endl << endl;
	}
};

class Director : public Manager {
public:
	Director(string firstName, char middleInitial, string lastName, string department) : Manager(firstName, middleInitial, lastName, department, 0) {}
	
	void printInfo() {
		cout << firstName << " " << middleInitial << " " << lastName << " " << department << " Director" << endl << endl;
	}
};


class Faculty : public Employee {
protected:
	string position;
public:

	Faculty(string firstName, char middleInitial, string lastName, string department, string position) : Employee(firstName, middleInitial, lastName, department) {
		this->position = position;
	}

	void printInfo() {
		cout << firstName << " " << middleInitial << " " << lastName << " " << department << " " << position << endl << endl;
	}
};


int main() {


	Manager m1("Dayan", 'M', "Saeed", "HR", 2);
	Director d1("ALi", 'M', "Abbas", "Marketing");
	Faculty f1("Rizwan", 'M', "Khalid", "FOIT", "Associate Professor");

	Employee* employees[] = { &m1, &d1, &f1 };
	for (int i = 0; i < 3; i++) {
		employees[i]->printInfo();
	}

	return 0;


}