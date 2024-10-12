#include <iostream> //developed by Roman Antoshchuk CS-2 --25.09.2023-- 
#include "header.h"

using std::cout;
using std::endl;

int main() { //power of a real number as a base and a natural number as a exponent

	cout << "---Lab work #02---" << endl;
	cout << "  Roman Antoshchuk  " << endl;
	cout << "----25.09.2023----" << endl;

	cout << '\n' << endl;

	double q = 0;
	int n = 1;
	cout.precision(14);
	unsigned int counter = 0;

	//tester with arrays
	double doubles[] = { 2.0, -5.6, 0.1, -14.552, 3.33, -8.75 }; 
	unsigned int exponents[] = { 4, 3, 10, 6, 16, 5 }; 

	for (int i = 0; i < 6; i++) { 
		double q = doubles[i];
		unsigned int n = exponents[i];

		cout << "q = " << q << endl;
		cout << "n = " << n << endl;

		cout << "usual power: " << power(q, n, counter) << "; counts: " << counter << endl;
			counter = 0;
		cout << "quick power: " << quickPower(q, n, counter) << "; counts: " << counter << endl;
			counter = 0;
		cout << "recursion power: " << recursion(q, n, counter) << "; counts: " << counter << endl;
			counter = 0;
		cout << " " << endl;
	}
	return 0;
}