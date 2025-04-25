#include "StreamInc.h"
#include "Time.h"

ostream& operator<<(ostream& osObj, const Time & tObject)
{
	osObj << tObject.hh << ":" << tObject.mm << ":" << tObject.ss << endl;

	return osObj;
}

istream& operator<<(istream& isObj, Time& tObject)
{
	//int temp;
	char ch;

	isObj >> tObject.hh;
	isObj.get(ch);
	isObj >> tObject.mm;
	isObj.get(ch);
	isObj >> tObject.ss;

	return isObj;
}

Time operator++(Time& obj) {

	/*Write the appropriate code here*/

	return obj;
}

Time operator--(Time& obj) {

	/*Write the appropriate code here*/

	return obj;
}

Time operator++(Time& obj, int) {

	Time temp = obj;

	/*Write the appropriate code here*/

	return obj;
}

Time operator--(Time& obj, int) {

	Time temp = obj;

	/*Write the appropriate code here*/

	return obj;
}
