#include<iostream>

#include"String.h"

using namespace std;

int main() {

	String s1("Hello "), s2("World"), s3;

	s3 = s1 + s2;

	s1.display();
	s2.display();
	s3.display();

	return 0;
}