#include <iostream> //developed by Roman Antoshchuk CS-2 --01.10.2023-- 
#include "header.h";

using std::cout;
using std::endl;
using std::cin;

int main() {
	
	cout << "---Lab work #03---" << endl;
	cout << "  Roman Antoshchuk  " << endl;
	cout << "----01.10.2023----" << endl; //updated 18.10.2023

	cout << '\n' << endl;


		cout.precision(15);
		int k = 100;
		double x[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		double y[] = { -100, -26.5, -25.6, -25.5, -5, -15.3, -3.0, 0.5, 2.5, 10.5, 20.5 };


		cout << "Integral calculation: " << endl;
		for (int i = 0; i < 10; ++i) {

			cout << "\nGaus integral of " << x[i] << ":  " << integralGausa(x[i], k) << endl;
		}

		cout << "\n\nExponent calculation: " << endl;
		for (int i = 0; i < 11; ++i) {
			cout << "\nExponent e of y= " << y[i] << ":  " << exponent(y[i], k) << endl;
		}

	return 0;
}