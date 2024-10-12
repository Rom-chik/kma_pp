double recursion(double q, unsigned int n, unsigned int &counter) {
		if (n == 0) {
			return 1;
		}
		else {
			counter++;
			return q * recursion(q, --n, counter);
		}
}