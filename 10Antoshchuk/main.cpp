#include <iostream> //developed by Roman Antoshchuk CS-2 --26.11.2023--
#include "headers.h"
#include <cmath>
#define M_PI       3.14159265358979323846
#define M_PI_2     1.57079632679489661923

using std::cout;
using std::endl;


int main() {

    cout << "---Lab work #10---" << endl;
    cout << "  Roman Antoshchuk  " << endl;
    cout << "----26.11.2023----" << endl;

    cout << '\n' << endl;

    cout << "Simpson rule for definite integral from 0 to PI/2, { 1 / (sqrt(a^2 * sin(x) ^ 2 + b^2 * cos(x)^2) }: " << std::endl;
    double a[] = { 18.7, 15.6, 20.0, 5.0, 35.5, 7.0, 12.2, 57.9, 11.5, 22.7 };
    double b[] = { 50.3, 45.1, 38.7, 70.2, 35.5, 55.6, 40.2, 58.9, 18.5, 25.7 };
    double eps = 1e-7;

    for (int i = 0; i < 10; ++i) {
        double simsonOutput = simpson(0, M_PI_2, &function, 0.00000001, a[i], b[i]) * (2 / M_PI);
        double M_output = M(a[i], b[i]);
        cout << "\na = " << a[i] << " b = " << b[i] << " ~ " << simpson(0, M_PI_2, &function, eps, a[i], b[i]) * (2 / M_PI) << " expected: " << M(a[i], b[i]) << endl;
        cout << "Are equals? " << (floor(simpson(0, M_PI_2, &function, 0.00000001, a[i], b[i]) * (2 / M_PI) * 1000000) == floor(M(a[i], b[i]) * 1000000)) << endl;
    }
	return 0;
}