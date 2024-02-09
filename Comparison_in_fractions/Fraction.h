#pragma once

class Fraction
{
private:
	int numerator, denominator, i;

	int GCD(int a, int b);

	int LCM(int a, int b);
public:
	Fraction(int numerator, int denominator);

	int converting_fractions(Fraction& other);

	bool operator==(Fraction& other);

	bool operator!=(Fraction& other);

	bool operator<(Fraction& other);

	bool operator>(Fraction& other);

	bool operator<=(Fraction& other);

	bool operator>=(Fraction& other);

	int get_n();
	int get_d();
};