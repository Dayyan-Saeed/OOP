class Fraction {
public:
    Fraction(int numerator, int denominator) : numerator_(numerator), denominator_(denominator) {}

    // getters
    int getNumerator() const { return numerator_; }
    int getDenominator() const { return denominator_; }

private:
    int numerator_;
    int denominator_;
};


int Maximum(Fraction* one, Fraction* two) {
    // calculate values of the fractions
    double valueOne = (double)one->getNumerator() / one->getDenominator();
    double valueTwo = (double)two->getNumerator() / two->getDenominator();

    // compare the values of the fractions
    if (valueOne > valueTwo) {
        return 1;
    }
    else if (valueTwo > valueOne) {
        return 2;
    }
    else {
        return 0;
    }
}