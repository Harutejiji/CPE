#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, m, x, y;
	cin >> t;
	while(cin >> n >> m) {
		if((n+m) % 2) {
			cout << "impossible\n";
			continue;
		}
		x =(n + m) / 2;
		y = x - m;
		if(x >= 0 && y >= 0 && x - y == m) cout << x << " " << y << endl;
		else cout << "impossible\n";
	}
	return 0;
}
