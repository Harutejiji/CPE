#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, l, ans = 0;
		cin >> n >> m >> l;
		n += m;
		while(n / l) {
			ans += (n / l);
			n = (n/l) + (n%l);
		}
		cout << ans << endl;
	}
	return 0;
}
