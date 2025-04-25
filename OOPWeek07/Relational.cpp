
#include "Relational.h"

bool operator==(Fraction& f1, Fraction& f2) {

	return f1.num == f2.num && f1.den == f2.den;
}

bool operator!=(Fraction& f1, Fraction& f2) {

	return !(f1 == f2);
}

bool operator<=(Fraction& f1, Fraction& f2) {

	return !(f1 > f2);
}

bool operator>=(Fraction& f1, Fraction& f2) {

	return f1 > f2 || f1 == f2;
}

bool operator<(Fraction& f1, Fraction& f2) {

	return !(f1 > f2 || f1 == f2);
}

bool operator>(Fraction& f1, Fraction& f2) {

	return f1.num * f2.den > f1.den * f2.num;
}
