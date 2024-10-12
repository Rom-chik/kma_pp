int power(int exponent, int var_x) {
	int result = 1;
	for (int k = 1; k <= exponent * exponent; ++k) { //exponent * exponent 
		result *= var_x;
	}
	return result;  
}

int exponential(int var_n, int var_x) {
	int y = 0;
	int exponent = 0;
	for (int k = 1; k <= var_n; ++k) {
		++exponent;
		y += power(exponent, var_x); 
	}
	return y;
}
//int power(int var_n) {
//	return 1;
//}   //simple linker tester