#include <iostream> // developed by Roman Antoshchuk on 28.11.2023
#include <cassert>
#include <cmath>

double power(double x, int n) {
	double p = 1;
	for (int i = 0; i < n; ++i) {
		p = p * x;
	}
	return p;
};

double sum1(double x, int n) {
	double s = 1;
	double k = 1;

	for (int i = 1; i < n; ++i) {
		k = power(-1, i)  / power(x, i*i);
		s += k;
	}
	return s;
};

// a[0] = 1
// a[1] = 1 / x^1^2
// a[n] = (-1)^n / x^n^2
// a[n-1] = -1^(n-1) / x^(n-1)^2
// a[n] / a[n-1] = ((-1)^n / x^n^2) / (-1^(n-1) / x^(n-1)^2) = 
// = -x^(n-1)^2 / x^n^2 = -x^(((n-1)^2)-n^2) = -x^(-2n+1)
// s[1] = 1 + a[1]
// s[n] = s[n-1] + a[n]
double recurSum(double x, int n) {
	double a = (-1) / x;
	int b = 1;
	double s = 1 + a;
	for (int i = 1; i < n; ++i) {
		++b;
		a = a * (-1) * pow(x, -2 * b + 1);
		s = s + a;
	}
	assert((!(x == 1) || !(x == -1) || !(x == 0)) ? (s == sum1(x, n)) : true);
	return s;
};