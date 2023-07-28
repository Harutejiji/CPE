#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, turnoff;
	while(cin >> n && n) {
		//n--;
		for(m = 1; m<n; m++) {
			turnoff = 0;
			for(int i=1; i<=n; i++) {
				turnoff = (turnoff + m) % i;
			}
			if(turnoff == 13) break;
		}
		cout << m << endl;
	}
	return 0;
}
