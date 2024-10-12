#include "cmath" //developed by Roman Antoshchuk CS-2 --15.10.2023-- 
using std::sqrt;

//double customSqrt(double x, double eps) { 
//	double s = 0.5 * x;
//	double t = s;
//	if (x != 0) {
//		t = s; s = (s + x / s) * 0.5;
//	} while ((fabs(s - t) / s) > eps);
//	return s;
//}

// -- Finding arithmetic-geometric mean --
// t = a[n-1]
// h = b[n-1]
double M(double a, double b) {
	double t = a;
	double h = b;

	for (int i = 1; a != b; ++i) {
		a = sqrt(t * h);
		b = (t + h) / 2;

		t = a;
		h = b;
	}

	return a;
}