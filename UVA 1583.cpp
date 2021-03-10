#include <bits/stdc++.h>
using namespace std;
int solve(int s) {
	int m = s;
	while(m) {
		s += m % 10;
		m /= 10;
	}
	return s;
}
int main() {
	int t, n, m;
	cin >> t;
	while(cin >> n) {
		set<int> v;
		for(int i=1; i<=100000; i++) if (solve(i) == n) v.insert(i);
		if(v.size() == 0) cout << "0" << endl;
		else cout << *v.begin() << endl;
	}
	return 0;
}
