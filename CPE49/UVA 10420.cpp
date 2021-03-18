#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	map<string, int> m;
	while(t--) {
		string s;
		cin >> s;
		m[s]++;
		getline(cin, s);
	}
	for(auto i:m) cout << i.first << " " << i.second << endl;
	return 0;
}
