#include"Insertion.h"

/*Following Code is for Question 01 Except Line 12*/
ostream& operator<<(ostream& os, const Student& std) {

	os << "Student Name is: " << std.Name << endl;
	os << "Studying in semester: " << std.semester << endl;
	os << "CGPA is: " << std.CGPA << endl;
	os << "Scholarship is: " << std.scholarship << endl;

	/*Following Line of Code is for Question 03*/
	os << "University: " << std.University << endl;

	return os;
}