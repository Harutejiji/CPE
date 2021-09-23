#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin >> n && n) {
		vector <int> v;
		int ans = 0;
		while(n > 0) {
			v.push_back(n % 2);
			ans += n % 2;
			n /= 2;
		}
		cout << "The parity of ";
		for(int i=v.size()-1; i >= 0; i--) {
			cout << v[i];
		}
		cout << " is " << ans << " (mod 2).\n";
	}
	return 0;
}
