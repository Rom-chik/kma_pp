#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

double log10(double x, double eps) {
	int sign = -1;
	double i = 2;
	double sum = x;
	double sum1 = 1;
	double counter = x;

	while (abs(sum - sum1) > eps) {
		sum1 = sum;

		counter = (sign) * (counter * x) * (i - 1) / i;
		sum = sum + counter;

		i++;

	}
	return sum;
}