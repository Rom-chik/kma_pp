#include <iostream>
#include <numbers>
using std::cout;
using std::endl;

// calculating Gaussian Integral
// x - (x^3) / (3 * 1!) + (x^5) / (5 * 2!) - ...
// a[1] = x^3
// b[1] = 3
// c[1] = 1!
// 
//                a[k]/x^2 = a[k-1] 
//                a[k-1] = x^(2k+1)/x^2 = x^(2k-1)
// 
// a[k] = x^(2k+1) = x^2k * x = x^(2k + 2 - 2 + 1) = x^(2k - 2 + 1)*x^2 = x^(2*(k-1)+1) * x^2 = a[k-1] * (x*x)
// a[k-1] = x^(2k-1) = x^(2*(k-1)+1)
//
// b[k] = b[k-1] + 2
//
// c[k] = c[k-1] * (-1)k
// 
// s[1] = a[1]/(b[1] * c[1])
// s[k] = s[k-1] + a[k]/(b[k] * c[k])
double integralGausa(double x, int k) {

	double a = x * x * x;
	double b = 3;
	double c = -1;
	double s = x + (a / (b * c));
	
	for (int i = 2; i <= k; ++i) {
		a *= x * x;
		b += 2;
		c *= -i;
		s += a / (b * c);
	}
	return s;
}


//quickPower for the whole part 
double quickPower(int wholeNum) {
	double e = std::numbers::e; int n = wholeNum; double y = 1;
	while (n > 0) {
		if (n % 2 == 0) { e = e * e; n = n / 2; }
		else { y = y * e; n = n - 1; }
	}
	return y;
}

//calculating {exponent = e^y} for the decimal part
// 1 + x + (x*x)/2! + (x^3)/3! + ...
// a[1] = x;
// a[k] = x^k /k! = a[k-1] * x / k
// a[k-1] = x^(k-1) / (k-1)! = x^k / x * (k-1)! = k *(x ^ k) / x * k! = (x^k / k!)*(k/x) = a(k) * k/x
// a[k-1] =  a[k] * k/x
// s[1] = 1 + a[1]
// s[k] = s[k-1] + a[k]
double taylor(double fractNum, int k) {
	double a = fractNum;
	double s = a + 1;
	//a[k-1] * x / k
	for (int i = 2; i <= k; ++i) {
		a *= fractNum / i;
		s += a;
	}
	return s;
}

double exponent(double y, int k) {
	int wholeNum = y;
	double fractNum = y - wholeNum;
	double result = 0;
	if (y > 0) {
		result = quickPower(wholeNum) * taylor(fractNum, k);
	}
	else {
		result = 1 / quickPower(-1 * wholeNum) * taylor(-1 * fractNum, k);
	}
	return result;
}