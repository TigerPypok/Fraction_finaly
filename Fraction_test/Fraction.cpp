#include "Fraction.h"
#include <cmath> 

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


Fraction simplify(const Fraction& frac) {
    Fraction result;
    int commonDivisor = gcd(abs(frac.numerator), abs(frac.denominator));
    result.numerator = frac.numerator / commonDivisor;
    result.denominator = frac.denominator / commonDivisor;
    if (result.denominator < 0) {
        result.numerator = -result.numerator;
        result.denominator = -result.denominator;
    }
    return result;
}

bool FractionEq(const Fraction& a, const Fraction& b) {
    return a.numerator == b.numerator && a.denominator == b.denominator;
}

void display(const Fraction& frac) {
    cout << frac.numerator << "/" << frac.denominator << endl;
}

int wholePart(const Fraction& frac) {
    return frac.numerator / frac.denominator;
}

Fraction add(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    result = simplify(result);
    return result;
}

Fraction subtract(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator - b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    result = simplify(result);
    return result;
}

Fraction multiply(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    result = simplify(result);
    return result;
}

Fraction divide(const Fraction& a, const Fraction& b) {
    if (b.numerator == 0) {
        throw invalid_argument("Деление на ноль!");
    }
    Fraction result;
    result.numerator = a.numerator * b.denominator;
    result.denominator = a.denominator * b.numerator;
    result = simplify(result);
    return result;
}

Fraction addInteger(const Fraction& frac, int integer) {
    return add(frac, { integer, 1 });
}
