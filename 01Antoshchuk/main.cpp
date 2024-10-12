#include <iostream> //developed by Roman Antoshchuk CS-2 --18.09.2023-- 
#include <string>
#include "funcHead.h"
#define _USE_MATH_DEFINES
#include <math.h>

using std::cout;
using std::endl;

bool testerDHS(double x) {
	return (x > -1 && x < 1);
}

int main() {
	double eps = 0.00000000000001;
	cout.precision(15);
	double x(0);

	//Finding sinus (first function)
	cout << "--------Finding sinus------------" << endl;
	for (x = -1; x < 90; x += 12) {
		double sinx = sinus(x, eps);
		cout << "sin " << x << " = " << sinx << endl;
		cout << "correct: " << sin(x) << "\n" << endl;
	}
	cout << "----------------------------------" << endl;

	//Finding ln (second function)
	cout << "\n---------Finding log10------------" << endl;
	for (x = -0.9; x < 1; x += 0.3) {
		if (testerDHS) {

			double func = log10(x, eps);
			cout << "ln(" << x << " + 1) = " << func << endl;
		}
		else {
			cout << "DHS of this function (-1,1)" << endl;
		}

		cout << "correct: " << log1p(x) << "\n" << endl;

	}
	cout << "----------------------------------" << endl;

	//Finding arcsinus (third function)
	cout << "\n----------Finding arcsinus-------------" << endl;
	x = 0.00000005;
	for (x = -0.9; x < 1; x += 0.2) {
		if (testerDHS) {

			double arcsinx = func3(x, eps);
			cout << "arcsin " << x << " = " << arcsinx << endl;
		}
		else {
			cout << "DHS of this function (-1,1)" << endl;
		}

		cout << "correct res: " << asin(x) << "\n" << endl;

	}
	cout << "----------------------------------" << endl;

	return 0;
}