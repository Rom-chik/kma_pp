#include <iostream> //developed by Roman Antoshchuk 07.11.2023
#include "header.h"
using std::cout;
using std::endl;

int main() {

	cout << "---Lab work #07---" << endl;
	cout << "  Roman Antoshchuk  " << endl;
	cout << "----07.11.2023----" << endl;

	cout << '\n' << endl;

	int numbers[] = { 0, 1, 2, 4, 5, 10, 13, 18, 20, 25, 30, 31, 32, 38, 39, 40, 45, 46 };

	for (int i = 0; i < 18; ++i) {
		cout << " number #" << numbers[i] << " of Fibonacci sequence is: " << quickFib(numbers[i]) << endl;
	}
}