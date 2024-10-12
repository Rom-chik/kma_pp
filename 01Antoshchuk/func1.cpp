#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

double sinus(double x, double eps) {

	x = fmod(x, (2 * M_PI));

	int sign = -1;
	int i = 1;
	double f = 1.0;
	int n = 10;

	double m = x;
	double sin1 = x;
	double sin2 = 0;

	while (abs(sin1 - sin2) > eps) {
		sin2 = sin1;

		m = (sign)*m * ((x * x) / ((f + 1) * (f + 2)));
		sin1 = sin1 + m;

		f = f + 2;

		i++;
	}
	return sin1;
}