#include <bits/stdc++.h>
using namespace std;
bool mycmp(pair<char, int> a, pair<char, int> b) {
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}
int main() {
	int t;
	cin >> t;
	cin.get();
	string s;
	map <char, int> m;
	while(getline(cin, s)) {
		for(int i=0; i<s.size(); i++) {
			if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 'a' - 'A';
			if(s[i] >= 'A' && s[i] <= 'Z') m[s[i]]++;
		}
	}
	vector<pair<char, int> > v;
	for(auto i:m) v.push_back(make_pair(i.first, i.second));
	sort(v.begin(), v.end(), mycmp);
	for(auto i:v) cout << i.first << " " << i.second << endl;
	return 0;
}
