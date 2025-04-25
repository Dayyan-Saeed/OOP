#include <ctime>
#include <iostream>

#include "Time.h"

using namespace std;

Time::Time() {

	cout << "Constructor Without Parameters: " << endl;
	hh = mm = ss = 0;

	// current date/time based on current system
	time_t now = time(0);

	// convert now to string form
	const int bufferSize = 30;
	char time_buff[bufferSize];

	//ctime_s(char  * buff, rsize_t buffSize, const time_t * sourceTime );
	ctime_s(time_buff, bufferSize, &now);

	long long total = now;

	long hrs = (long)total / 3600;
	hrs = (hrs % 24) + 5;
	total %= 3600;
	int mnt = (long)total / 60;
	total %= 60;
	int snd = (long)total;

	hh = hrs;
	mm = mnt;
	ss = snd;

	cout << "The local seconds: " << now << endl;
	cout << "The local date and time is: " << time_buff << endl;
	cout << "Hours: " << hrs << " Minutes: " << mnt << " Seconds: " << snd << endl;
}

Time::Time(int h = 0, int m = 0, int s = 0) {

	cout << "Parameterized Constructor:" << endl;
	hh = h;
	mm = m;
	ss = s;
}

Time Time::operator++() {

	/*Write the appropriate code here*/

	return *this;
}

Time Time::operator--() {

	/*Write the appropriate code here*/

	return *this;
}

Time Time::operator++(int) {

	Time temp = *this;

	/*Write the appropriate code here*/

	return temp;
}

Time Time::operator--(int) {

	Time temp = *this;

	/*Write the appropriate code here*/

	return temp;
}
