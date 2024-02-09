#include <iostream>
#include "Fraction.h"

int main()
{
	Fraction f1(6, 11);
	Fraction f2(4, 3);

	

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << "\n\n";


	//Проверка работы fraction_conversion()

	std::cout <<"f1 = "<< f1.get_n() << "/" << f1.get_d() << "\n";
	std::cout <<"f2 = "<< f2.get_n() << "/" << f2.get_d() << "\n";

	return 0;
}