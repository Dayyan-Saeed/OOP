#include <iostream>
#include "headerT2.h"

using namespace std;

int main()
{
	int acc_no;
	char name[100], acc_type[100];
	float balance;
	cout << "\n Enter Details: \n";
	cout << endl;
	cout << "\n Accout No. ";
	cin >> acc_no;
	cout << "\n Name : ";
	cin >> name;
	cout << "\n Account Type : ";
	cin >> acc_type;
	cout << "\n Balance : ";
	cin >> balance;

	bank b1(acc_no, name, acc_type, balance);  
	b1.deposit(); 
	b1.withdraw(); 
	b1.display(); 

	cout << endl;
	return 0;
}

