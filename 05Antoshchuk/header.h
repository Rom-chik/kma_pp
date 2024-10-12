#pragma once
void fillArray(double* coeff, size_t size);
double sum(double* coeff, size_t size, int sign = 1);
double Horner(double* coeff, size_t size, double x);