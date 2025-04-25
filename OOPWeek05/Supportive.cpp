#include "Supportive.h"

Fraction add(Fraction& f1, Fraction& f2) {

	Fraction result;

	result.setnum(f1.getnum() * f2.getden() + f1.getden() * f2.getnum());
	result.setden(f1.getden() * f2.getden());

	return result;
}

Fraction sub(Fraction& f1, Fraction& f2) {

	Fraction result;

	result.setnum(f1.getnum() * f2.getden() - f1.getden() * f2.getnum());
	result.setden(f1.getden() * f2.getden());

	return result;
}

Fraction mul(Fraction& f1, Fraction& f2) {

	Fraction result;

	result.setnum(f1.getnum() * f2.getnum());
	result.setden(f1.getden() * f2.getden());

	return result;
}

Fraction div(Fraction& f1, Fraction& f2) {

	Fraction result;

	result.setnum(f1.getnum() * f2.getden());
	result.setden(f1.getden() * f2.getnum());

	return result;
}
