#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	string reg;
	string date;
	int cgpa;

};

void print(student student);

int main() {

	student n;

	cout << "Enter name: ";
	cin >> n.name;
	cout << "Enter Registration no: ";
	cin >> n.reg;
	cout << "Enter admission date: ";
	cin >> n.date;
	cout << "Enter CGPA: ";
	cin >> n.cgpa;
	cout << endl;

	print(n);

}

void print(student student) {

	cout << "Name :   " << student.name << endl;
	cout << "Reg no : " << student.reg << endl;
	cout << "Date :   " << student.date << endl;
	cout << "CGPA :   " << student.cgpa << endl;


}