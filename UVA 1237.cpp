#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		vector<string> vm;
		vector< pair<int, int> > vp;
		int n, t1, t2;
		string s;
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> s >> t1 >> t2;
			vm.push_back(s);
			vp.push_back(make_pair(t1, t2));
		}
		cin >> n;
		for(int i=0; i<n; i++) {
			int m, c = 0;
			string ans;
			cin >> m;
			for(int j=0; j<vp.size(); j++) {
				if (m >= vp[j].first && m <= vp[j].second) {
					ans = vm[j];
					c++;
				}
			}
			if(c == 1) cout << ans << endl;
			else cout << "UNDETERMINED\n"; 
		}
		if(t != 0) cout << endl;
	}
	return 0;
}
