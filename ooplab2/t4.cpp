#include <iostream>
#include <string>
using namespace std;

struct Department {
	string name;
};

struct Faculty {

	string name;
	string id;
	string designation;
    string department;
	int salary;
};
struct Student {
	
	string name;
	string id;
	string discipline;
	string mobile;
	string address;
};

struct staff {
	string name;
	string id;
	string designation;
	string department;
	int salary;
};
struct HR_employees {
	string name;
	string id;
	string designation;
	string department;
	int salary;

};
struct UCP {
	Department d;
	Faculty f;
	Student n;
	staff t;
	HR_employees h;
};
  
int main() {

	Department d;
	cout << "Enter Department name: ";
	cin >> d.name;
	cout << endl;

	Faculty f;
	cout << "Faculty:" << endl;
	cout << "Enter name: ";
	cin >> f.name;
	cout << "Enter id: ";
	cin >> f.id;
	cout << "Enter designation: ";
	cin >>f.designation;
	cout << "Enter department: ";
	cin >> f.department;
	cout << "Enter salary: ";
	cin >> f.salary;
	cout << endl;

	Student n;
	cout << "Student:" << endl;
	cout << "Enter name: ";
	cin >> n.name;
	cout << "Enter id: ";
	cin >> n.id;
	cout << "Enter discipline: ";
	cin >> n.discipline;
	cout << "Enter mobile: ";
	cin >> n.mobile;
	cout << "Enter address: ";
	cin >> n.address;
	cout << endl;

	staff t;
	cout << "Staff Member:" << endl;
	cout << "Enter name: ";
	cin >> t.name;
	cout << "Enter id: ";
	cin >> t.id;
	cout << "Enter designation: ";
	cin >> t.designation;
	cout << "Enter department: ";
	cin >> t.department;
	cout << "Enter salary: ";
	cin >> t.salary;
	cout << endl;

	HR_employees h;
	cout << "HR_employees:" << endl;
	cout << "Enter name: ";
	cin >> h.name;
	cout << "Enter id: ";
	cin >> h.id;
	cout << "Enter designation: ";
	cin >> h.designation;
	cout << "Enter department: ";
	cin >> h.department;
	cout << "Enter salary: ";
	cin >> h.salary;
	cout << endl;
	cout << endl;
	  
	/*Displaying*/

	cout << "                   Diplaying information " << endl << endl;

	cout << "Department name: " << d.name << endl << endl;

	cout << "   Faculty " << endl;
	cout << "name: " << f.name << endl;
	cout << "id: "<< f.id << endl;
	cout << "designation: "<< f.designation << endl;
	cout << "department: "<< f.department << endl;
	cout << "salary: "<< f.salary << endl;
	cout << endl;

	cout << "   Student " << endl;
	cout << "name: " << n.name << endl;
	cout << "id: " << n.id << endl;
	cout << "discipline: " << n.discipline << endl;
	cout << "mobile: " << n.mobile << endl;
	cout << "address: " << n.address << endl;
	cout << endl;

	cout << "   Staff " << endl;
	cout << "name: " << t.name << endl;
	cout << "id: " << t.id << endl;
	cout << "designation: " << t.designation << endl;
	cout << "department: " << t.department << endl;
	cout << "salary: " << t.salary << endl;
	cout << endl;


	cout << "   HR_employees " << endl;
	cout << "name: " << h.name << endl;
	cout << "id: " << h.id << endl;
	cout << "designation: " << h.designation << endl;
	cout << "department: " << h.department << endl;
	cout << "salary: " << h.salary << endl;
	cout << endl;

}