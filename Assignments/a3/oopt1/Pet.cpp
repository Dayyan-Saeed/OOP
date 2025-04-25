#include"Pet.h"


void Pet::buildObject(const Pet& p)
{
	name = new char[strlen(p.name) + 1];
	strncpy(name, p.name,length(name));

}

Pet::Pet(const char* _name)
{
	name = new char[length(_name)+1]();
	strncpy(name, _name, length(_name));
}

void Pet::strncpy(char* copied, const char* original, int len)
{
	for (int i = 0; i < len; i++)
	{
		copied[i] = original[i];
	}
	copied[len] = 0;
}

int Pet::length(const char* str)
{
	int i = 0;
	for (; str[i] != 0; i++);
	return i;
}

Pet::Pet(const Pet& obj)
{
	name = new char[length(obj.name) + 1]();
	strncpy(name, obj.name, length(obj.name));
}

Pet::~Pet()
{
	delete[]name;
	name = nullptr;
}

void Pet::print()const
{
	cout << "Name: ";
	for (int i = 0; name[i] != 0; i++)
	{
		cout << name[i];
	}
	cout << endl;
}