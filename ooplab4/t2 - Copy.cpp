
#include <iostream>
#include "headerT2.h"

using namespace std;


void bank::deposit()   
{
	int damt1;
	cout << "\n Enter Deposit Amount = ";
	cin >> damt1;
	bal += damt1;
}
void bank::withdraw() 
{
	int wamt1;
	cout << "\n Enter Withdraw Amount = ";
	cin >> wamt1;
	if (wamt1>bal)
		cout << "\n Cannot Withdraw Amount";
	bal -= wamt1;
}
void bank::display()  
{
	cout << "\n ----------------------";
	cout << "\n Accout No. : " << acno;
	cout << "\n Name : " << nm;
	cout << "\n Account Type : " << acctype;
	cout << "\n Balance : " << bal;
}