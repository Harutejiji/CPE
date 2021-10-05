#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, m;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		if((n - m) % (m - 1) == 0) cout << (n - m)/(m - 1) + 1 << endl;
		else cout << "cannot do this\n";
	}
	return 0;
}
