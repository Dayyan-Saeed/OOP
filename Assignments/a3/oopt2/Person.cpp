#include"Person.h"

Person::Person(const char* _name, int _age)
{
	name = new char[length(_name) + 1]();
	strncpy(name, _name, length(_name));
	age = _age;
}

Person::Person(const Person& obj)
{
	name = new char[length(obj.name) + 1]();
	strncpy(name, obj.name, length(obj.name));
	age = obj.age;
}

void Person::buildObject(const char* _name, const int _age)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	age = _age;
}


Person& Person::operator=(const Person& obj)
{
	if (this != &obj)
	{
		name = new char[length(obj.name) + 1]();
		strncpy(name, obj.name, length(obj.name));
		age = obj.age;
	}
	return *this;
}

Person::~Person()
{
	delete[]name;
	name = nullptr;
}

void Person::print()const
{
	cout << "Name: ";
	for (int i = 0; name[i] != 0; i++)
	{
		cout << name[i];
	}
	cout << "\tAge: " << age << endl;
}

void Person::strncpy(char* copied, const char* original, int len)
{
	for (int i = 0; i < len; i++)
	{
		copied[i] = original[i];
	}
	copied[len] = 0;
}

int Person::length(const char* str)
{
	int i = 0;
	for (; str[i] != 0; i++);
	return i;
}
