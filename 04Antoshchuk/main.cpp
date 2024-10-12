#include <iostream> //developed by Roman Antoshchuk CS-2 --15.10.2023-- 
#include "headers.h"
using std::cout;
using std::endl;
using std::cin;

int main() {

	cout << "---Lab work #04---" << endl;
	cout << "  Roman Antoshchuk  " << endl;
	cout << "----15.10.2023----" << endl;

	cout << '\n' << endl;

	cout.precision(15);

	double a[] = { 1, 5.6, 10.3, 7.7, 5.5};
	double b[] = { 9.5, 10.5, 20.5, -18.9, 13.0};


	cout << "Arithm-geom mean (M) calculation: " << endl;
	for (int i = 0; i < 5; ++i) {
		if (0 < a[i] && a[i] < b[i]) {
			cout << "\n a = " << a[i] << endl;
			cout << " b = " << b[i] << endl;
			cout << "Arithm-geom mean (M) of a and b is: " << M(a[i], b[i]) << endl;
		}
		else {
			cout << "\n a = " << a[i] << endl;
			cout << " b = " << b[i] << endl;
			cout << "Input error , must be: { 0 < a < b }" << endl;
		}
	}

	return 0;
}