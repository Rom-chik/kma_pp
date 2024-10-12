#include <iostream>
#include <cassert> //developed by Roman Antoshchuk CS-2 --22.10.2023--
#include <cstdlib>
#include <random>
using std::cout;
using std::endl;


void fillArray(double* coeff, size_t size) {
		int min = -30;
		int max = 40;
	std::random_device rd;
	std::mt19937 generator(rd());
	std::uniform_int_distribution<int> distribution(min, max);

	cout << "random coeff's: ";
	for (int i = 0; i < size; ++i) {
		coeff[i] = distribution(generator); 
		cout << coeff[i] << " ";
	}
}


double sum(double* coeff, size_t size, int sign) {
	double sum(0);

	if (sign == 1) {
		for (int i = 0; i < size; ++i) {
			sum = sum + coeff[i];
		}
	}
	else {
		if (size % 2 == 0) {
			for (int i = 0; i < size; ++i) {
				sum = sum + (sign)*coeff[i];
				sign = -sign;
			}
		}
		else if (size % 2 == 1) {
			sign = 1;
			for (int i = 0; i < size; ++i) {
				sum = sum + (sign)*coeff[i];
				sign = -sign;
			}
		}
	}
	return sum;
}

double Horner(double* coeff, size_t size, double x) {
	double result = coeff[size - 1];
	double power = 1;
	for (int i = (size - 2); i >= 0; --i) {
		
		power = power * coeff[i] * x;
		result = result + power;
		power =  power / coeff[i];
	}
	assert(((x == 1) || (x == -1)) ? (result == sum(coeff, size, x)) : true);
	assert((x == 0) ? (coeff[size - 1]) : true);

	return result;
}