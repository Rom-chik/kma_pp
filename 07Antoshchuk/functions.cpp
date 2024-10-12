#include <iostream> //developed by Roman Antoshchuk 07.11.2023

//structs
struct Matrix2x2
{
	int _11, _12, _21, _22;
};
struct Vector2
{
	int _1, _2;
};

//fib func
Matrix2x2 multiplyMatrixes(const Matrix2x2& matrix1, const Matrix2x2& matrix2) {
	Matrix2x2 resMatrix;

	resMatrix._11 = matrix1._11 * matrix2._11 + matrix1._12 * matrix2._21;
	resMatrix._12 = matrix1._11 * matrix2._12 + matrix1._12 * matrix2._22;
	resMatrix._21 = matrix1._21 * matrix2._11 + matrix1._22 * matrix2._21;
	resMatrix._22 = matrix1._21 * matrix2._12 + matrix1._22 * matrix2._22;

	return resMatrix;
}

Vector2 multiplyMatrixeByVector(const Matrix2x2& matrix, const Vector2& vector) {
	Vector2 resVec;

	resVec._1 = matrix._11 * vector._1 + matrix._12 * vector._2;
	resVec._2 = matrix._21 * vector._1 + matrix._22 * vector._2;

	return resVec;
}

Matrix2x2 quickMatrixPower(const Matrix2x2& matrix, int degree) {

	if (degree == 1) return matrix;
	if (degree % 2 == 0) {
		return quickMatrixPower(multiplyMatrixes(matrix, matrix), degree / 2);
	}
	else {
		return multiplyMatrixes(quickMatrixPower(matrix, degree - 1), matrix);
	}
}

long long unsigned int quickFib(const int degree) {
	Vector2 firstFibVector = { 1, 0 };
	Matrix2x2 oneMatrix = { 1, 1, 1, 0 };

	if (degree == 0) return 0;
	if (degree == 1) return 1;
	Matrix2x2 resMatrix = quickMatrixPower(oneMatrix, degree - 1);
	Vector2 resFibVector = multiplyMatrixeByVector(resMatrix, firstFibVector);
	return resFibVector._1;
}