#include <iostream> //developed by Roman Antoshchuk CS-2 --26.11.2023--
#include <cmath>
using std::sqrt;

double function(double x, double a, double b) {
    return 1 / (sqrt((pow(a, 2) * pow(sin(x), 2) + pow(b, 2) * pow(cos(x), 2))));
}

double M(double a, double b) {
    double previousA = a;
    double previousB = b;

    for (int i = 1; a != b; ++i) {
        a = std::sqrt(previousA * previousB);
        b = (previousA + previousB) / 2;

        previousA = a;
        previousB = b;
    }

    return 1/a;
}

double simpson(double a, double b, double(*function)(double, double, double), double eps, double aForFunc, double bForFunc) {
    double I = eps + 1;
    double I1 = 0;

    for (int k = 2; (k <= 4) || (fabs(I1 - I) > eps); k *= 2) {
        double h, sum2 = 0, sum4 = 0, sum = 0;
        h = (b - a) / (2 * k);
        for (int i = 1; i <= 2 * k - 1; i += 2) {
            sum4 += function(a + h * i, aForFunc, bForFunc);
            sum2 += function(a + h * (i + 1), aForFunc, bForFunc);
        }
        sum = function(a, aForFunc, bForFunc) + 4 * sum4 + 2 * sum2 - function(b, aForFunc, bForFunc);
        I = I1;
        I1 = (h / 3) * sum;
    }
    return I1;
}