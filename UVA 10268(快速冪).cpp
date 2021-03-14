#include <bits/stdc++.h>
using namespace std;
long long _pow(long long a, long long b) {
	if (b == 0) return 1;
	return b % 2 ? a * _pow(a*a, b/2) : _pow(a*a, b/2);
}
int main() {
	int x;
	while(cin >> x) {
		cin.get();
		vector<int> v;
		string s;
		getline(cin, s);
		stringstream ss(s);
		int m;
		while(ss >> m) v.push_back(m);
		long long n = v.size() - 1, sum = 0;
		for(int i=0; i<n; i++) {
			sum += (v[i] * (n-i) * _pow(x,n-i-1));
		}
		cout << sum << endl;
	}
	return 0;
}
	
