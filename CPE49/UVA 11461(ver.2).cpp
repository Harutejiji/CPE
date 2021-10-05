#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	while(cin >> n >> m && n && m) {
		int c = 0;
		for(int i=n; i<=m; i++) {
			if((int)sqrt(i) * (int)sqrt(i) == i) c++;
		}
		cout << c << endl;
	}
	return 0;
}
