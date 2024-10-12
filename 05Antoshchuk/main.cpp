#include <iostream> //developed by Roman Antoshchuk CS-2 --22.10.2023--
#include "header.h"
using std::cout;
using std::endl;
using std::cin;
	
int main() {

    cout << "---Lab work #04---" << endl;
    cout << "  Roman Antoshchuk  " << endl;
    cout << "----22.10.2023----" << endl;

    cout << '\n' << endl;
	
	double x = 0;

	double myArray[9] = { -1, 0, 1, 5, 8, -4, -6, 1, 2 };
	int arrayOfSize[9] = { 20, 3, 5, 7, 5, 10, 2, 13, 6 };

	for (int i = 0; i < (sizeof(myArray) / sizeof(double)); ++i) {
		
		x = myArray[i];
		const size_t size = arrayOfSize[i];
		double* coeff = new double[size];
		
		/*fillArray(coeff, size);*/
		fillArray(coeff, size);

		cout << "\nResult: " << Horner(coeff, size, x) << endl;
		if (x == 1 || x == -1) {
			cout << "sum= " << sum(coeff, size, x) << endl;
		}
		cout << " " << endl;

		delete[] coeff;
	}

    return 0;
}