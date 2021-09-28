#include <bits/stdc++.h>
using namespace std;
bool check(int a, int b) {
	if(a<10000 && b<10000) return false;
	int vis[10] = {a < 10000};
	while(a) {
		int m = a % 10;
		if(vis[m]) return false;
		else {
			vis[m] = 1;
			a /= 10;
		}
	}
	while(b) {
		int m = b % 10;
		if(vis[m]) return false;
		else {
			vis[m] = 1;
			b /= 10;
		}
	}
	return true;
}
int main() {
	int n;
	bool blank = false;
	while(cin >> n && n) {
		if(blank) cout << endl;
		blank = true;
		bool solution = false;
		for(int i=1234; i<100000 / n; i++) {
			if(check(i, i*n)) {
				solution = true;
				cout << i * n << " / " << (i<10000 ? "0" : "") << i << " = " << n << endl;
			}
		}
		if(!solution) cout << "There are no solutions for " << n << "." << endl;
	}
	return 0;
}
