#include "Student.h"

/* Code from line 4 to line 36 was not required,
	it is written to make things work properly
*/
int Student::length(const char* eptr) {

	int i = 0;

	if (!eptr)
		return -1;

	for (; eptr[i] != '\0'; i++);

	return i;
}

Student::Student(const char* name_, int semester_, double cgpa_, double scholarship_) {

	int len = length(name_);

	Name = new char[len + 1];

	for (int i = 0; i < len; i++) {

		Name[i] = name_[i];
	}

	Name[len] = '\0';

	this->semester = semester_;
	CGPA = cgpa_;
	scholarship = scholarship_;
}

/*Following Code is for Question 01*/
void Student::copyData(const Student& std) {
	
	int len = length(std.Name);

	Name = new char[len + 1];

	for (int i = 0; i < len; i++) {

		Name[i] = std.Name[i];
	}

	Name[len] = '\0';

	CGPA = std.CGPA;
	semester = std.semester;
	scholarship = std.scholarship;
}

Student::Student(const Student& std) {

	copyData(std);
}

Student::~Student() {

	if (Name) {

		delete[] Name;
		Name = nullptr;
	}
}

Student& Student::operator=(const Student&std) {

	if (this != &std) {

		delete[] Name;
		copyData(std);
	}

	return *this;
}

/*Following Code is for Question 02*/
Student Student::operator++(int) {

	Student temp = *this;

	scholarship *= 1.1;

	if (scholarship <= 0)
		scholarship = 500;

	return temp;
}

char& Student::operator[](int index) const {

	return Name[index];
}

/*Following Code is for Question 03*/
Student::Student():Student("", 0, 0, 0) {

}
