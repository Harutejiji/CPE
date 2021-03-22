#include <bits/stdc++.h>
using namespace std;
int main() {
	long long t, n, m;
	cin >> t;
	while(cin >> n >> m) {
		long long x, y;
		x = (n + m) / 2;
		y = n - x;
		if(y > 0 && x > 0 && x - y == m ) cout << x << " " << y << endl;
		else cout << "impossible\n";
	}
	return 0;
}
