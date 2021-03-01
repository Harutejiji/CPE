#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, temp;
	while(cin >> n >> m) {
		temp = m;
		while(n > m && n > 1 && m > 1) 
			m *= temp;
		if ( n != m || n < 2 || m < 2) 
			cout << "Boring!" << endl;
		else {
			cout << n;
			while(n > 1) {
				cout << " " << (n /= temp);
			}
			cout << endl;
		}
	}
	return 0;
}
