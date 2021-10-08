#include <bits/stdc++.h>
#define pi M_PI
using namespace std;
int main() {
	int t, n, m;
	cin >> t;
	while(cin >> n >> m) {
		double a, b, c;
		a = m / 2.0;
		c = n / 2.0;
		b = sqrt(a*a - c*c);
		printf("%.3lf\n", a * b * pi);
	}
	return 0;
}
