#include <bits/stdc++.h>
using namespace std;
int main() {
	map<char, string> table;
	table[' '] = "0000000000";
	table['c'] = "0111001111";
	table['d'] = "0111001110";
	table['e'] = "0111001100";
	table['f'] = "0111001000";
	table['g'] = "0111000000";
	table['a'] = "0110000000";
	table['b'] = "0100000000";
	table['C'] = "0010000000";
	table['D'] = "1111001110";
	table['E'] = "1111001100";
	table['F'] = "1111001000";
	table['G'] = "1111000000";
	table['A'] = "1110000000";
	table['B'] = "1100000000";
	int t;
	string s;
	cin >> t;
	while(t--) {
		cin >> s;
		int ans[10] = {};
		char l = ' ', n;
		for(int i=0; i<s.size(); i++) {
			n = s[i];
			for(int j=0; j<10; j++) {
				if (table[n][j] == '1' && table[l][j] == '0') ans[j]++;
			}
			l = s[i];
		}
		for(int i=0; i<10; i++) {
			if(i) cout << " ";
			cout << ans[i];
		}
		cout << endl;
	}
	return 0;
}
