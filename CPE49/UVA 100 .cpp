#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	while(cin >> n >> m) {
		cout << n << " " << m << " ";
		int maxi = 0;
		for(int i=min(n, m); i<=max(m, n); i++) {
			int cycle = 1, temp = i;
			while(temp > 1) {
				if(temp % 2) temp = 3 * temp + 1;
				else temp /= 2;
				cycle++;
			}
			maxi = max(maxi, cycle);
		}
		cout << maxi << endl;
	}
	return 0;
}
