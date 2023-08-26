#include <bits/stdc++.h>
using namespace std;
int main() {
	char c[256];
	c['B'] = '1';
	c['F'] = '1';
	c['P'] = '1';
	c['V'] = '1';
	c['C'] = '2';
	c['G'] = '2';
	c['J'] = '2';
	c['K'] = '2';
	c['Q'] = '2';
	c['S'] = '2';
	c['X'] = '2';
	c['Z'] = '2';
	c['D'] = '3';
	c['T'] = '3';
	c['L'] = '4';
	c['M'] = '5';
	c['N'] = '5';
	c['R'] = '6';
	string s;
	char a;
	while(cin >> s) {
		vector <int> v;
		if(s.size() == 1) {
			cout << endl;
			continue;
		}
		for(int i=0; i<s.size(); i++) {
			if(c[s[i-1]] == c[s[i]] && i > 0 || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'H' || s[i] == 'W' || s[i] == 'Y') continue;
			v.push_back(c[s[i]]-'0');
		}
		for(int i=0; i<v.size(); i++) {
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}
