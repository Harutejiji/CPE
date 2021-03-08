#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, t;
	cin >> t;
	while(cin >> n) {
		int ans = 0;
		for(int i=1; i<n; i++) {
			if (n % i == 0) ans += i;
		}
		if (ans < n) cout << "deficient\n";
		else if(ans == n) cout << "perfect\n";
		else cout << "abundant\n";
	}
	return 0;
}
