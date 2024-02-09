#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int a, int b) {
	numerator = a; denominator = b;
	if ((i = GCD(numerator, denominator)) != 1) {
		numerator /= i;
		denominator /= i;
	}
};

int Fraction::GCD(int a, int b) {
	return b ? GCD(b, a % b) : a;
};

int Fraction::LCM(int a, int b) {
	return a / GCD(a, b) * b;
};

int Fraction::converting_fractions(Fraction& other) {
	return LCM(denominator, other.denominator);
};

bool Fraction::operator==(Fraction& other) {
	return (numerator * other.denominator == other.numerator * denominator);

};

bool Fraction::operator!=(Fraction& other) {

	return !(*this == other);
};

bool Fraction::operator<(Fraction& other) {
	return (numerator * other.denominator < other.numerator * denominator);

};

bool Fraction::operator>(Fraction& other) {
	return other < *this;
};

bool Fraction::operator<=(Fraction& other) {
	
	return !(*this > other);
};

bool Fraction::operator>=(Fraction& other) {

	return !(*this < other);
};

int  Fraction::get_n() {
	return  numerator;
};

int  Fraction::get_d() {
	return  denominator;
};