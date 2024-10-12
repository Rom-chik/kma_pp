#include <iostream> //developed by Roman Antoshchuk CS-2 --20.11.2023--
#include "headers.h"
#include <cmath>
#define M_PI 3.141592653589793238462643383279502884L 
using std::cout;
using std::endl;

int main() {

    cout << "---Lab work #09---" << endl;
    cout << "  Roman Antoshchuk  " << endl;
    cout << "----20.11.2023----" << endl;

    cout << '\n' << endl;

    const double eps = 1e-8;
    const double asin = M_PI - 1, bsin = M_PI;

    cout << "Dichotomy {sin(x) = x}: " << dichotomy(sinMinusX, -1, 1, eps) << endl;
    cout << "Dichotomy {sin(x) = 0}: " << dichotomy(sinX, asin, bsin, eps) << endl;
    cout << "Dichotomy {ln(x) = 1}: " << dichotomy(lnX, 2, 3, eps) << endl;
    cout << "Dichotomy {exp(x) = 2-x}: " << dichotomy(expX, 0, 2, eps) << endl;
    
    return 0;
}