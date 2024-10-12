#include <iostream>
#include "exponential.h"
//using namespace std;
using std::cout;
using std::endl;
using std::cin;

int main() {

	cout << "first program in VisualStudio" << endl;
	cout << "also first hometask from PP" << endl;
	cout << "--------------------------" << endl;

		int var_x { 1 };
	cout << "enter the value of X: " << endl;
		cin >> var_x;

		int var_n { 1 };
	cout << "enter the value of n: " << endl;
		cin >> var_n;

	cout << "x = " << var_x << "\nn = " << var_n << endl;
	
	int simple_result = var_x + var_x * (var_n - 1); //simple_result gives { Y=X1+X2+X3+...Xn }
		cout << "y = " << simple_result << " Simple result y=.." << endl;

		cout << "y = " << exponential(var_n, var_x) << " Quite hard result y=" << endl;

	return 0;
}