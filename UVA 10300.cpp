#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int sum = 0, n, m, a, f;
		cin >> f;
		for(int i=0; i<f; i++) {
			cin >> n >> a >> m;
			sum += n*m;
		}
		cout << sum << endl;
	}
	return 0;
}
