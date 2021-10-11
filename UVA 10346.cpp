#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	while(cin >> n >> m) {
		int sum = n;
		while(n) {
			sum += n / m;
			if(n / m == 0) break;
			n = (n / m) + (n % m);
		}
		cout << sum << endl;
	}
	return 0;
}
