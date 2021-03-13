#include <bits/stdc++.h>
using namespace std;
int main() {
	int h1, m1, h2, m2;
	while(cin >> h1 >> m1 >> h2 >> m2) {
		if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;
		int p = 0;
		p = (h2 * 60 + m2) - (h1 * 60 + m1);
		if (p > 0) {
			cout << p << endl;
		}else {
			p += 1440;
			cout << p << endl;
		}
	}
	return 0;
}
