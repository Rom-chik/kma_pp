//����������� ���������(������)
int remainder(int m, int n) { 
	/*for (int k = m; k <= n; k - n) {
		m = m - n;
	}*/
	while (m >= n) {
		m -= n;
	}
	return m;
}

//����������� ������� ������(���� ������� �� ������)
int incomp(int m, int n) {
	return (m - remainder(m, n))/n;
}