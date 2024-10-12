#pragma once // developed by Roman Antoshchuk on 28.11.2023
#include <iostream>
using std::cout;
using std::endl;

//task 2
double sum1(double x, int n);
double recurSum(double x, int n);
//Tribonacci (task 3-5)
unsigned long long int tribonacci(int n, int& counter);
unsigned long long int recTribonacci(int n, int& counter);
unsigned long long int quickTrib(int tribNumer, int &counter);
//task 6
std::string fractionString(int m, int n);
double fractionNumber(double m, double n);
//task 9
std::string fractionPower(int m, int n, unsigned int p);
void graphic();