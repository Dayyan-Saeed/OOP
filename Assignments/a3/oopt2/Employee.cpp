#include"Employee.h"

void Employee::print()const
{
	Person::print();
	cout << "Designation: ";
	for (int i = 0; designation[i] != 0; i++)
	{
		cout << designation[i];
	}
	cout <<"\tSalary: "<< salary << endl;
}

void Employee::builEmployee(const char*_designation, const double _salary)
{
	
	designation = new char[strlen(_designation) + 1];
		strcpy(designation, _designation);
		salary = _salary;
	

}

char& Employee::operator[](const int index)
{
	return designation[index];
}

Employee::Employee(const char* _name, const int _length, const char* _designation, const double _salary) : Person(_name, _length)
{
	designation = new char[length(_designation) + 1]();
	strncpy(designation, _designation, length(_designation));
	salary = _salary;
}


Employee::Employee(const Employee& obj) : Person(obj)
{
	designation = new char[length(obj.designation) + 1]();
	strncpy(designation, obj.designation, length(obj.designation));
	salary = obj.salary;
}

Employee& Employee::operator=(const Employee& obj)
{
	if (this != &obj)
	{
		Person::operator=(obj);
		designation = new char[length(obj.designation) + 1]();
		strncpy(designation, obj.designation, length(obj.designation));
		salary = obj.salary;
	}
	return *this;
}

char* Employee::getDesignation()
{
	char* des = new char[length(designation) + 1];
	strncpy(des, designation, length(designation));
	return des;
}

double Employee::getSalary()
{
	return salary;
}

Employee::~Employee()
{
	delete[]designation;
	designation = nullptr;
}

ostream& operator<<(ostream& os, Employee& e)
{
	os <<"Designation: "<< e.getDesignation() << ", Salary:" << e.getSalary() << endl;
	return os;
}

//friend std::ostream& operator<<(std::ostream& os, Employee& e) {
//		os << e.designation << ", " << e.salary << endl;
//		return os;
//	}