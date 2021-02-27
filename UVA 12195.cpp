#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	double sum = 0;
	map<char, double> m = {{'W', 1}, {'H', 0.5}, {'Q', 0.25}, {'E', 0.125},  {'S', 0.0625}, {'T', 0.03125}, {'X', 0.015625}};
	while(getline(cin, s) && s != "*") {
			int ans = 0;
		for(int i=1; i<s.size(); i++) {
			sum += m[s[i]];
			if(s[i] == '/') {
				if(sum == 1) ans++;
				sum = 0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
