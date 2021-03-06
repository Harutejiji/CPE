#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.get();
	cin.get();
	while(t--) {
		map<string, int> m;
		string s;
		int sum = 0;
		while(getline(cin, s) && s != "") {
			m[s]++;
			sum++;
		}
		for(auto i:m) printf("%s %.4lf\n", i.first.c_str(), (double)i.second/sum*100);
		if (s == "" && t != 0) cout << endl;
	}
	return 0;
}
