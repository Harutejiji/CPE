#include <bits/stdc++.h>
using namespace std;
bool mycmp(int a, int b) {
	return a > b;
}
long long apow(long long a, long long b) {
	int z = a;
	for(int i=1; i<b; i++) {
		a *= z;
	}
	return 2*a;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		vector<int> v;
		int n;
		while(cin >> n && n) v.push_back(n);
		sort(v.begin(), v.end(), mycmp);
		long long sum = 0;
		for(int i=0, j=1; i<v.size(); i++, j++) {
			sum += _pow(v[i], j);
		}
		if(sum >= 5000000) cout << "Too expensive\n";
		else cout << sum << endl;
	}
	return 0;
}
