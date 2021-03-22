#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, m, c = 0;
	cin >> t;
	while(cin >> n >> m) {
		if (m % 2 == 0) m -= 1;
		if (n % 2 == 0) n += 1;
		int sum = 0, h = ((m-n)/2)+1;
		sum = (n + m) * h / 2;
		cout << "Case " << ++c << ": " << sum << endl;
	}
	return 0;
}
