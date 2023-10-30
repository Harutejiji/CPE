#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, m;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		string s, ans;
		m--;
		cin >> ans;
		while(m--) {
			cin >> s;
			for(int i=s.size(); i>=0; i--) {
				if(s.substr(0, i) == ans.substr(ans.size() - i)) {
					ans += s.substr(i);
					break;
				}
			}
		}
		cout << ans.size() << endl;
	}
	return 0;
}
