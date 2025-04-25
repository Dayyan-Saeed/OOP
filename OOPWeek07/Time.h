#pragma once
#include <iostream>

using namespace std;

class Time
{
	int hh;
	int mm;
	int ss;

	friend ostream& operator<<(ostream&, const Time&);
	friend istream& operator<<(istream&, Time&);

	friend Time operator++(Time&, int);
	friend Time operator--(Time&, int);

public:

	Time();
	Time(int, int, int); 
	
	Time operator++();
	Time operator--();

	Time operator++(int);
	Time operator--(int);
};

