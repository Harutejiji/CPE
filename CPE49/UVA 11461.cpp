#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	while(cin >> n >> m && n && m) {
		cout << int(sqrt(m)) - int(sqrt(n) + 0.99999999) + 1 << endl;
	}
	return 0;
}
