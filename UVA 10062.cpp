#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second == b.second ? a.first > b.first : a.second < b.second;
}
int main() {
	string s;
	while(getline(cin, s)) {
		int count;
		if(count > 0) cout << endl;
		map<int, int> m;
		for(int i=0; i<s.size(); i++) m[s[i]]++;
		vector< pair<int, int> > v;
		for(auto i:m) v.push_back({i.first, i.second});
		sort(v.begin(), v.end(), cmp);
		for(auto i: v) cout << i.first << " " << i.second << endl;
		count++;
	}
	return 0;
}
