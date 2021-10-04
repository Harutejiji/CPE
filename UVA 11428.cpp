#include <bits/stdc++.h>
using namespace std;
int N = 10001;
int main() {
	int n;
	int x[N] = {}, y[N] = {};
	bool flag[N] = {false};
	for(int i=2; i<60; i++) {
		for(int j=1; j<i; j++) {
			int m = (i*i*i) - (j*j*j);
			if(m <= 10000 && !flag[m]) {
				flag[m] = true;
				x[m] = i;
				y[m] = j;
			}
		}
	}
	while(cin >> n && n) {
		if(flag[n]) cout << x[n] << " " << y[n] << endl;
		else cout << "No solution\n";
	}
	return 0;
}
