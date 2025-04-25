#include <iostream>
#include"Headert4.h"
using namespace std;


void auto_parts::eng_info(char *from, char *to)
{
	char first_letter;
	int last_digit;
	int i;
	printf("\n\t\tEngines Information\n");
	for (i = 0; audi[i].serial[0] != *from; i++);
	while (1)
	{
		cout<<"\nSerial Number : ", audi[i].serial);
		cout << ("\nYear Of Manufacture : ", audi[i].yom);
		cout << "\nMaterail Used : ", audi[i].mat);
		cout << "\nQuantity : ", audi[i].quantity);
		if (i == 10)
			i = 0;
		i++;
		if (audi[i].serial[0] == *to &&  audi[i].serial[2] == *(to + 2))
		{
			cout << "\nSerial Number : ", audi[i].serial);
			cout << ("\nYear Of Manufacture : ", audi[i].yom);
			cout << "\nMaterail Used : ", audi[i].mat);
			cout << "\nQuantity : ", audi[i].quantity);
			return;
		}
	}
}