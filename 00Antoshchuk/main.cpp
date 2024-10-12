#include <iostream> //developed by Roman Antoshchuk CS-2 --09.09.2023-- 
#include "labHeader.h"
//#include "task3division.h"
//#include "task4Euclidean.h"

using std::cout;
using std::cin;
using std::endl;

int main() {

	cout << "---Lab work #00---" << endl;
	cout << "  Roman Antoshchuk  " << endl;
	cout << "----10.09.2023----" << endl;

	cout << '\n' << endl;

	// ---------- 3 task: division with remainder -----------
	cout << "-----------Task 3-----------" << endl;
		int q = 0; //неповна частка
		int r = 0; //остача
		//int m = 0; //ділене
		//int n = 0; //дільник
		//
		//	cout << "Enter the number that will be divided: " << endl;
		//	cin >> m;
		//	cout << "Enter the divider: " << endl;
		//	cin >> n;

		int testCases[4][2] = { //binary array for tests
			{235, 77},
			{20, 7},
			{100, 23},
			{25, 4}
		};

			for (int i = 0; i < 4; i++) {
				int m = testCases[i][0];
				int n = testCases[i][1];

				if (m <= n) {
					cout << "--INCORECT INPUT--! \n{m} MUST BE BIGGER THAN {n} !" << endl;
					return 1;
				}
				if (m % n == 0) {
					cout << "--INCORECT INPUT--! \nTHIS FRACTION HAS NO REMAINDER !" << endl;
					return 1;
				}

				cout << "\nDivided number m = " << m << endl;
				cout << "Divider n = " << n << endl;

				cout << "Incomplete part q = " << incomp(m, n) << endl;
				cout << "Remainder part r = " << remainder(m, n) << endl;

				cout << " m = q * n + r  <==>  " << m << " = " << incomp(m, n) << " * " << n << " + " << remainder(m, n) << endl;
			}

		// ---- Task 4 Eclidian algorithm -------
		cout << "\n----------Task 4----------" << endl;
		/*int g = 0;
		int c = 0;
		int d = 0;

		cout << "Enter first number(g):" << endl;
		cin >> g;
		cout << "Enter second number:(c): " << endl;
		cin >> c;*/
		int numbers[] = { 120, 18, 9, 27, 35, 49, 24, 360, }; //classic array for tests
		int numCount = sizeof(numbers) / sizeof(numbers[0]);

		for (int i = 0; i < numCount; i += 2) {
			int g = numbers[i];
			int c = numbers[i + 1];

			if (g <= 0 || c <= 0) {
				cout << "--INCORECT INPUT--!" << endl;
				return 1;
			}

			cout << "\nFirst number g = " << g << endl;
			cout << "Second number c = " << c << endl;
			cout << "Highest common divider d = " << findDiv(g, c) << endl;
		}
	return 0;
}