#include <iostream> // developed by Roman Antoshchuk on 28.11.2023
#include <cassert>

//Tribonacci with array
unsigned long long int tribonacci( int n, int& counter) {
	unsigned long long int a[100] = {};
	a[0] = 0;
	a[1] = 0;
	a[2] = 1;

	for (int i = 3; i <= n; ++i) {
        counter++;
		a[i] = a[i-1] + a[i-2] + a[i-3];
	}
	return a[n];
};

//Tribonacci with recursion
unsigned long long int recTribonacci(int n, int& counter) {
    counter++;
	if (n == 0 || n == 1) return 0;
	if (n == 2) return 1;
	else {
		unsigned long long int result = recTribonacci(n - 1, counter) + recTribonacci(n - 2, counter) + recTribonacci(n - 3, counter);
        
		assert((n >= 0) ? (result == tribonacci(n, n)) : true);
		return result;
	}
};

//Tribonacci with quick realisation
struct Matrix3x3 {
    unsigned long long int _11, _12, _13, _21, _22, _23, _31, _32, _33;
};

Matrix3x3 matrixMult(Matrix3x3 m1, Matrix3x3 m2) {
    return {
        m1._11 * m2._11 + m1._12 * m2._21 + m1._13 * m2._31,
        m1._11 * m2._12 + m1._12 * m2._22 + m1._13 * m2._32,
        m1._11 * m2._13 + m1._12 * m2._23 + m1._13 * m2._33,

        m1._21 * m2._11 + m1._22 * m2._21 + m1._23 * m2._31,
        m1._21 * m2._12 + m1._22 * m2._22 + m1._23 * m2._32,
        m1._21 * m2._13 + m1._22 * m2._23 + m1._23 * m2._33,

        m1._31 * m2._11 + m1._32 * m2._21 + m1._33 * m2._31,
        m1._31 * m2._12 + m1._32 * m2._22 + m1._33 * m2._32,
        m1._31 * m2._13 + m1._32 * m2._23 + m1._33 * m2._33
    };
}

Matrix3x3 quickPowMatrixRecursive(Matrix3x3 matrix, int powNumber, int& counter) {
    if (powNumber == 0) {
        return { 1, 0, 0, 0, 1, 0, 0, 0, 1 };
    }
    if (powNumber == 1) {
        return matrix;
    }
    counter++;
    Matrix3x3 halfPower = quickPowMatrixRecursive(matrix, powNumber / 2, counter);
    if (powNumber % 2 == 0) {
        return matrixMult(halfPower, halfPower);
    }
    else {
        return matrixMult(matrixMult(halfPower, halfPower), matrix);
    }
}

unsigned long long int quickTrib(int n, int& counter) {
    if (n < 3) {
        return n == 0 ? 0 : 1;
    }
    Matrix3x3 matrix = quickPowMatrixRecursive({ 1, 1, 1, 1, 0, 0, 0, 1, 0 }, n - 2, counter);

    assert((n >= 0) ? (matrix._11 == tribonacci(n, n)) : true);

    return matrix._11;
}