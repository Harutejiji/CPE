#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin >> n && n) {
		cout << n << " : ";
		int p = 0;
		for(int i=2; i<=n; i++) {
			if(n % i == 0) p++;
			while(n % i == 0) n /= i;
			if(n == 1) break;
		}
		cout << p << endl;
	}
	return 0;
}
