#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin >> n && n) {
		int sum = 0;
		vector <int> v;
		stringstream ss;
		string s;
		while(n) {
			sum += n % 2;
			v.push_back(n%2);
			n /= 2;
		}
		reverse(v.begin(), v.end());
		for(auto i:v) ss << i;
		ss >> s;
		cout << "The parity of " << s << " is " << sum << " (mod 2).\n";
	}
	return 0;
}
