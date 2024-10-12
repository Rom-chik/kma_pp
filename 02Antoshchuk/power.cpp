double power(double q, unsigned int n, unsigned int &counter) {
	double power = 1.0;
	for (int i = 0; i < n; ++i) {
		power *= q;
		counter++;
	}
	return power;
}

double quickPower(double q, unsigned int n, unsigned int &counter) {

	double result = 1.0;

	if (n % 2 == 0) {
		n = n / 2;
		result = power(q, n, counter);
		result = result * result;
		counter++;
	}
	else {
		n = (n - 1) / 2;
		result = power(q, n, counter);
		result = result * result * q;
		counter = counter + 2;
	}
	return result;
}