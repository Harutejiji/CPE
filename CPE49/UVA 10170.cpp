#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	while(cin >> n >> m) {
		while(m > n) {
			m -= n;
			n++;
		}
		cout << n << endl;
	}
	return 0;
}
