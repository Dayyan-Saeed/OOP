#pragma once
class Person
{
	char* name;
	int age;

	void buildObject(const char*, const int);

protected:

	void strncpy(char*, const char*, int);
	int length(const char*);

public:
	
	Person(const char*, int);
	Person(const Person&);
	Person& operator=(const Person&);
	virtual	~Person();

	virtual void print()const;
};

