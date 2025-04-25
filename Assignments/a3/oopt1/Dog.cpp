#include"Dog.h"

Dog::Dog(const char* n, const char* b) : Pet(n)
{
	breed = new char[length(b)+1];
	Pet::strncpy(breed, b, Pet::length(b));
}

void Dog::buildObject(const Dog& d)
{
	breed = new char[strlen(d.breed) + 1];
	strncpy(breed, d.breed, length(breed));

}

Dog::Dog(const Dog& obj) : Pet(obj)
{
	breed = new char[length(obj.breed) + 1];
	Pet::strncpy(breed, obj.breed, Pet::length(obj.breed));
}

Dog::~Dog()
{
	delete[]breed;
	breed = nullptr;
}

void Dog::print()const
{
	Pet::print();
	cout << "Breed: ";
	for (int i = 0; breed[i] != 0; i++)
	{
		cout << breed[i];
	}
	cout << endl;
}