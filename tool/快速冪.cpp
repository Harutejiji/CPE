long long _pow(long long a, long long b) {
	if (b == 0) return 1;
	return b % 2 ? a * _pow(a*a, b/2) : _pow(a*a, b/2);
}
