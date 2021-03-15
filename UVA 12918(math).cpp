#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, m, ans;
		cin >> n >> m;
		ans = (m - 1 + m - n) * n / 2;
		cout << ans << endl;
	}
	return 0;
}	
