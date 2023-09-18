#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, r[101], cnt;
	int i, j, k;
	while(cin >> n && n) {
		for(m = 1; ; m++){
			if(n == 13) {
				cout << 1 << endl;
				break;
			}
			for(k = 1; k<=n; k++) r[k] = 1;
			r[1] = 0;
			cnt = 1;
			i = 1;
			j = 0;
			while(cnt < n) {
				i++;
				if(r[i] == 1) {
					j++;
					if(j == m) {
						r[i] = 0;
						j = 0;
						cnt++;
					}
				}
				if(i >= n) i -= n;
			}
			if(i == 13) {
				cout << m << endl;
				break;
			}
		}
	}
	return 0;
}
