#include <bits/stdc++.h>
using namespace std;
int solve(int n) {
	int sum = 0;
	while(n) {
		sum += (n % 2);
		n /= 2;
	}
	return sum;
}
int main() {
	int n;
	vector<int> v;
	while(cin >> n && n) {
		v.clear();
		int a = n;
		while(n) {
			v.push_back(n % 2);
			n /= 2;
		}
		cout << "The parity of ";
		for(int i=v.size()-1; i>=0; i--) cout << v[i];
		cout << " is " << solve(a) << " (mod 2).\n";
	}
	return 0;
}
