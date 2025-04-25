#include<iostream>
#include"average.h"
using namespace std;

void average::data() {

	average s[4];

	for (int i = 0; i <= 4; i++) {

		cout << "Enter 5 numbers " << endl;
		cin >> s[i].no;
		
	}
	
	int sum = 0, avg = 0;
	for (int i = 0; i <= 4; ++i)
	{
		cout << i + 1 << ". Enter number: ";
		cin >> s[i];
		sum += s[i];
	}

	avg = sum / 5;
	cout << "Average = " << avg;
}