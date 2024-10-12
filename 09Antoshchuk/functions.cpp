#include <iostream> //developed by Roman Antoshchuk CS-2 --20.11.2023--
#include <cmath>
#define M_PI 3.141592653589793238462643383279502884L 
using std::cout;
using std::endl;


//function expressions
double sinMinusX(double x) {
    return sin(x) - x;
}

double sinX(double x) {
    if (x == M_PI)return 0;
    return sin(x);
}

double lnX(double x) {
    return log(x) - 1;
}

double expX(double x) {
    return exp(x) - 2 + x;
}

//dichotomy function
double dichotomy(double (*f)(double), double a, double b, double eps) {
    double c = (a + b) / 2; //middle

    if (f(a) == 0) {
        return a;
    }
    else if (f(b) == 0) {
        return b;
    }
    else if (f(c) == 0) {
        return c;
    }
    //epsilon checking
    else if (b - a < eps)return c;

    else if (f(c) < 0) {
        return dichotomy(f, c, b, eps);
    }
    else {
        return dichotomy(f, a, c, eps);
    }
}