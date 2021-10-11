#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0, n, m;
	int maxi, mini;
	string s;
	while(cin >> s) {
		cin >> t;
		printf("Case %d:\n", ++c);
		while(t--) {
			bool flag = false;
			cin >> n >> m;
			maxi = max(n, m);
			mini = min(n, m);
			char bas = s[mini];
			for(int i=mini; i<=maxi; i++) {
				if(s[i] != bas) flag = true;
			}
			if(flag) cout << "No\n";
			else cout << "Yes\n";
		}
	}
	return 0;
}
			
