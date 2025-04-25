#pragma once
#include<iostream>

#include "Time.h"

using namespace std;

ostream& operator<<(ostream&, const Time&);
istream& operator<<(istream&, Time&);

Time operator++(Time&);
Time operator--(Time&);
Time operator++(Time&, int);
Time operator--(Time&, int);
