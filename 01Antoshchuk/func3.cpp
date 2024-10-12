#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

double func3(double x, double eps) {
	double i = 2;
	double f = 1.0;

	double m = x;
	double arcsin1 = x;
	double arcsin2 = 0;


	while (abs(arcsin1 - arcsin2) > eps) {
		arcsin2 = arcsin1;

		m = m * (f * (x * x) * (i - 1) / (i * (i + 1)));
		arcsin1 = arcsin1 + m;


		f = f + 2;

		i = i + 2;
	}
	return arcsin1;
}