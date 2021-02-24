#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	cin.get();
	cin.get();
	map<char, char> map;
	while(T--) {
		string s, m, ans;
		map.clear();
		getline(cin, s);
		getline(cin, m);
		cout << m << endl << s << endl;
		for(int i=0; i<s.size(); i++) map[s[i]] = m[i];
		while(getline(cin, ans) && ans!= "") {
			for(int i=0; i<ans.size(); i++) {
				if(map[ans[i]]) cout << map[ans[i]];
				else cout << ans[i];
			}
			cout << endl;
		}
		if(T > 0) cout << endl;
	}
	return 0;
}
