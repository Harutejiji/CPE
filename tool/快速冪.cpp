long long _pow(long long a, long long b) {
	if (b == 0) return 1;
	return b % 2 ? a * _pow(a*a, b/2) : _pow(a*a, b/2);
}


或是


int fast_pow(x, n) {
	if(n == 1) return x;
	if(n % 2 == 0) {
		int xk = fast_pow(x, n/2);
		return xk * xk;
	}
	if(n % 2) {
		int xk = fast_pow(x, n/2);
		return x * xk * xk;
	}
}
