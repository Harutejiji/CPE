#include <bits/stdc++.h>
using namespace std;
int main() {
	int n = 38, fib[n+1] = {1, 1};
	for (int i=2; i<=n; i++) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	int T, x;
	cin >> T;
	while(T--) {
		cin >> x;
		cout << x << " = ";
		int i = n;
		while(fib[i] > x) i--;
		for(; i>=1; i--) {
			if (fib[i] <= x) {
				cout << 1;
				x -= fib[i];
			} else {
				cout << 0;
			}
		}
		cout << " (fib)\n";
	}
	return 0;
}
