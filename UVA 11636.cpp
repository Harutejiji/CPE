#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 1;
	while(cin >> t && t>=0) {
		int n = 0, m = 1;
		while(m < t) {
			m *= 2;
			n++;
		}
		printf("Case %d: %d\n", c++, n);
	}
	return 0;
}
