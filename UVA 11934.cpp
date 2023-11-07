#include <bits/stdc++.h>
using namespace std;
int formula(int a, int b, int x, int c) {
	return a*x*x + b*x + c;
}
int main() {
	int a, b, c, d, l;
	while(cin >> a >> b >> c >> d >> l) {
		if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0) break;
		int ans = 0;
		for(int i=0; i<=l; i++) {
			int n ;
			n = formula(a, b, i, c);
			if(n % d == 0) ans++;
		}
		cout << ans << endl;
	}
	return 0;
} 
