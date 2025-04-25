#include<iostream>
#include"student.h"
using namespace std;

	void student::data(){

		student s[5];

		for (int i = 1; i <= 5; i++) {

			cout << "Enter information of student "<< i << endl;
			cout << "Enter roll no: ";
			cin >> s[i].rollno;
			cout << "Enter name: ";
			cin >> s[i].name;
			cout << "Enter city: ";
			cin >> s[i].city;
			cout << "Enter cgpa: ";
			cin >> s[i].cgpa;
			cout << endl;
		}
		int x = 0;
		cout << "Enter student no to get data: ";
		cin >> x;

		cout << "Roll no: " << s[x].rollno << endl;
		cout << "Name: " << s[x].name << endl;
		cout << "City: " << s[x].city << endl;
		cout << "cgpa: " << s[x].cgpa << endl;

	}