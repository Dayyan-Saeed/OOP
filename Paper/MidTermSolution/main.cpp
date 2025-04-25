#include<iostream>
#include"Student.h"

using namespace std;

/*Following Code is for Question 03*/
const char* Student::University = "University of Central Punjab";

/* Code from line 12 to line 64 was not required,
	it is written to check things are working properly
*/
Student doSomething(Student ss) {

	return ss;
}

int question01() {

	Student s1("Zameer Iqbal", 7, 3.35, 2500);
	Student s2("Aleena Sheikh", 3, 3.25, 1500);
	Student s3("Happy Cow", 4, 2.12, 0);

	s3 = doSomething(s1);

	cout << s3 << endl;

	return 0;
}

int question02() {

	Student s1("Happy Cow", 4, 3.5, 5000);
	cout << s1++ << endl;

	s1[0] = 'N';
	cout << s1 << endl;

	const Student s2("Unhappy Cow", 4, 2.5, 0);

	s1[6] = s2[8];
	cout << s1 << endl;

	return 0;
}

int question03() {

	Student sArray[10];
	
	Student ss("Object Oriented Programming", 3, 2.0, 0);

	cout << ss << endl;

	return 0;
}

int main() {

	question01();
	question02();
	question03();

	return 0;
}
