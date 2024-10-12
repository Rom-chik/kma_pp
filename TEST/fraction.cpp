#include<iostream> // developed by Roman Antoshchuk on 30.11.2023
#include <string>
#include <cassert>


//Task 6 (fraction simplifying and outputing)
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);

    if (a == 0) return b;
    if (b == 0) return a;

    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }

    return a;
}

std::string fractionString(int m, int n) {
    int c = gcd(m, n);
    m = m / c;
    n = n / c;
    if (n < 0) {
        n = -n;
        m = -m;
    }
    std::string stringM = std::to_string(m);
    std::string stringN = std::to_string(n);
    std::string s = stringM + "/" + stringN;
    return s;
}

double fractionNumber(double m, double n) {
    if (n < 0) {
        n = -n;
        m = -m;
    }
    int c = gcd(m, n);
    m = m / c;
    n = n / c;
    return m / n;
}


//Task 9 (taking fraction into power)
long long int power1(double x, unsigned int n) {
    double p = 1;
    for (int i = 0; i < n; ++i) {
        p = p * x;
    }
    return p;
};

std::string fractionPower(int m, int n, unsigned int p) {
    if (n < 0) {
        n = -n;
        m = -m;
    }
    m = power1(m, p);
    n = power1(n, p);
    std::string stringMo = std::to_string(m);
    std::string stringNo = std::to_string(n);
    std::string s = stringMo + "/" + stringNo;
    double result = power1(m / n, p);
    assert(result == pow(m / n, p));
    
    return s;
}