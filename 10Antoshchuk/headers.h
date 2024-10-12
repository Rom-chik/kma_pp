#pragma once
//developed by Roman Antoshchuk CS-2 --26.11.2023--
double function(double x, double a, double b);
double M(double a, double b);
double simpson(double a, double b, double(*function)(double, double, double), double eps, double aForFunc, double bForFunc);