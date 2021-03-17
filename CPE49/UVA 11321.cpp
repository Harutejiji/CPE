#include <bits/stdc++.h>
using namespace std;
int n, m;
bool cmp(int a, int b) {
	if(a % m != b % m) return a % m < b % m;
	if(abs(a % 2) != abs(b % 2)) return a % 2;
	return a % 2 == 0 ? a < b : a > b;
}
int main() {
	cin >> n >> m;
	int l[n];
	cout << n << " " << m << endl;
	for(int i=0; i<n; i++) cin >> l[i];
	sort(l, l+n, cmp);
	for(int i=0; i<n; i++) {
		cout << l[i] << endl;
	}
	cout << 0 << " " << 0 << endl;
	return 0;
}
