#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n[4];
		for(int i=0; i<4; i++) cin >> n[i];
		sort(n, n+4);
		if(n[0] == n[1] && n[2] == n[3]) {
			if(n[1] == n[2]) cout << "square\n";
			else cout << "rectangle\n";
		}
		else if(n[3] < n[2]+n[1]+n[0]) cout << "quadrangle\n";
		else cout << "banana\n";
	}
	return 0;
}
