#include <bits/stdc++.h>
using namespace std;
int solve(int n) {
	int sum = 0;
	while(n) {
		sum += n % 2;
		n /= 2;
	}
	return sum;
}
int main() {
	int T, m;
	cin >> T;
	while(T--) {
		cin >> m;
		int a = m, b1 = solve(m), b2 = 0;
		while(a) {
			b2 += solve(a % 10);
			a /= 10;
		}
		cout << b1 << " " << b2 << endl;
	}
	return 0;
}
