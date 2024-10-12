#include <iostream> // developed by Roman Antoshchuk on 28.11.2023
#include "headers.h"

int main() {
	
	cout << "\n---Control work---" << endl;
	cout << "  Roman Antoshchuk  " << endl;
	cout << "----28.11.2023----" << endl;

	cout << '\n' << endl;
	cout.precision(15);


	cout << "\n-------------   Task 1:    -------------" << endl;
		for (unsigned int x = 0; x <= 10; ++x) {
			cout << "with x = " << x << " result for ~((x << 32) | (x >> 32)) = " << ~((x << 32) | (x >> 32)) << " is equal to result of ~x =" << ~x << endl;
		}

	cout << "\n\n-------------   Task 2 (Sum):    -------------" << endl;
		int numberOfRow = 10;
		int arrayOfX[] = {-12, -7, -5, -2, 2, 5, 12, 15};
		for (int i = 0; i < 8; ++i) {
			cout << "for x = " << arrayOfX[i] << endl;
			cout << "v lob: " << sum1(arrayOfX[i], numberOfRow) << endl;
			cout << "recurent sum: " << recurSum(arrayOfX[i], numberOfRow) << endl;
		}

	cout << "\n\n-------------   Task 3(Tribonacci):    -------------" << endl;
		const int tribNum = 90;
		int counter = 0;
		cout << "num #" << tribNum << " of Tribonacci is: " << tribonacci(tribNum, counter) << " in " << counter << " steps" << endl;

	cout << "\n\n-------------   Task 4(Recursive Tribonacci):    -------------" << endl;
		const int recTribNum = 25;
		counter = 0;
		cout << "num #" << recTribNum << " of Recursive Tribonacci is: " << recTribonacci(recTribNum, counter) << " in " << counter << " steps" << endl;

	cout << "\n\n-------------   Task 5(Quick Tribonacci):    -------------" << endl;
		int quickTribNum = 90;
		counter = 0;
		cout << "Quick Tribonacci #" << quickTribNum << " is " << quickTrib(quickTribNum, counter) << " in " << counter << " steps" << endl;

	cout << "\n\n-------------   Task 6(Fraction with invariant):    -------------" << endl;
		int arrayOfM[] = { -12, -7, -15, -2, 2, 144, 12, 15 };
		int arrayOfN[] = { 8, 25, -5, 13, 4, 5, 120, -3 };
		for (int i = 0; i < 8; ++i) {
			cout << "Fraction of " << arrayOfM[i] << " and " << arrayOfN[i] << " is: " << fractionString(arrayOfM[i], arrayOfN[i])
			<< " or " << fractionNumber(arrayOfM[i], arrayOfN[i]) << endl;
		}

	cout << "\n\n-------------   Task 9(Fraction power):    -------------" << endl;
	unsigned int arrayOfP[] = { 8, 3, 5, 2, 10, 3, 1, 3 };
	for (int i = 0; i < 8; ++i) {
		cout << "Fraction: " << arrayOfM[i] << " / " << arrayOfN[i] << " is taken into power: " << arrayOfP[i] << " is: " 
		<< fractionPower(arrayOfM[i], arrayOfN[i], arrayOfP[i]) << endl;
	}
	cout << "\n\n----------      Roman Antoshchuk CS-2          ----------" << endl;
	cout << "-------------   Task 10(graphic content):    -------------" << endl;
		graphic();

		cout << " " << endl;
	return 0;
}