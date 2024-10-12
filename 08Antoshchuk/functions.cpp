//developed by Roman Antoshchuk CS-2 --13.11.2023--

// -----  1  -----
// Power
void zet(double& y, double& x, unsigned int& k, int& counter) {
    if (k > 0) {
        if (k % 2 == 1) {
            y *= x;
            k--;
        }
        else {
            x *= x;
            k /= 2;
        }
        zet(y, x, k, ++counter);
    }
}

double power(double x, unsigned int n, int& counter) {
    double y = 1;
    zet(y, x, n, ++counter);
    return y;
}


// -----  2  -----
// Fibonaci
void fib(double& f1, double& f2, unsigned int n, int& counter) {
    if (n >= 2) {
        double f = f2;
        f2 += f1;
        f1 = f;
        fib(f1, f2, n - 1, ++counter);
    }
};

double Fibonacci(unsigned int n, int& counter) {
    double f0 = 0, f1 = 1;
    switch (n) {
    case 0:
        return f0;
        break;
    case 1:
        return f1;
        break;
    default:
        fib(f0, f1, n, ++counter);
        return f1;
    }
};


// -----  3  -----
struct Matrix2x2 {
    int _11, _12, _21, _22;
};

struct Vector2 {
    int _1, _2;
};

Matrix2x2 matrixMult(Matrix2x2 m1, Matrix2x2 m2) {
    return {
      (m1._11 * m2._11 + m1._12 * m2._21),
      (m1._11 * m2._21 + m1._12 * m2._22),
      (m1._21 * m2._11 + m1._22 * m2._21),
      (m1._21 * m2._12 + m1._22 * m2._22)
    };
}

Matrix2x2 quickPowMatrixRecursive(Matrix2x2 matrix, int powNumber, int& counter) {
    if (powNumber == 0) {
        return { 1,1,1,0 };
    }
    if (powNumber == 1) {
        return { 1, 1, 1, 0 };
    }
    if (powNumber % 2 == 0) {
        return matrixMult(quickPowMatrixRecursive(matrix, powNumber / 2, ++counter), quickPowMatrixRecursive(matrix, powNumber / 2, ++counter));
    }
    else {
        return matrixMult(quickPowMatrixRecursive(matrix, --powNumber, ++counter), { 1, 1, 1, 0 });
    }
}

//quick Fibonaci
int quickFibonacci(int fibNumber, int& counter) {
    Matrix2x2 matrix = quickPowMatrixRecursive({ 1, 1, 1, 0 }, fibNumber - 1, ++counter);
    return matrix._11;
}