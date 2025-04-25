#include <iostream>
#include <string>

#include "DynamicArray.h"

using namespace std;

int main() {

	DynamicArray<int> intList(100);
	DynamicArray<string> stringList;
	
	int index; 
	int number;
	cout << "List 11: Processing the integer list" << endl;
	cout << "List 12: Enter 5 integers: ";

	for (index = 0; index < 5; index++) {

		cin >> number; 
		intList.insertAt(number, index); 
	} 

	cout << endl;
	cout << "List 19: intList: "; 
	intList.print(); 
	cout << endl; 
	
	//Sort intList
	intList.sort(); 
	cout << "Line 23: After sorting, intList: ";
	intList.print(); 
	cout << endl; 
	string str;
	cout << "Line 27: Processing the string list" << endl; 

	cout << "Line 28: Enter 5 strings: ";
	
	for (index = 0; index < 5; index++) {
		
		cin >> str;
		stringList.insertAt(str, index);
	} 

	cout << endl; //Line 34
	cout << "Line 35: stringList: ";
	stringList.print();
	cout << endl;

	//Sort stringList
	stringList.sort();
	cout << "Line 39: After sorting, stringList: ";
	stringList.print();
	cout << endl;
	int intListSize;
	cout << "Line 43: Enter the size of the integer "
		<< "list: ";
	cin >> intListSize;
	cout << endl;

	DynamicArray<int> intList2(intListSize); 

	cout << "Line 47: Processing the integer list"<< endl; 
	cout << "Line 48: Enter " << intListSize << " integers: ";

	for (index = 0; index < intListSize; index++) {

		cin >> number;
		intList2.insertAt(number, index);
	}

	cout << endl;
	cout << "Line 55: intList2: ";
	intList2.print();
	cout << endl;
	//Sort intList2
	intList2.sort();
	cout << "Line 59: After sorting, intList2: ";
	intList2.print();
	cout << endl; 
	cout << "Line 62: Length of intList2: "
		<< intList2.getLength() << endl;
	cout << "Line 63: Maximum size of intList2: "
		<< intList2.getMaxSize() << endl;

	cout << intList.getLength() << endl;

	cout << intList.getMaxSize() << endl;

	return 0;
}