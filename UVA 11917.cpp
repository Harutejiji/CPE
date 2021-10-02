#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, m, d, temp, c = 0;
	cin >> t;
	string s, w;
	while(t--) {
		bool flag = false;
		map <string, int> work;
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> s >> m;
			work[s] = m;
		}
		cin >> d >> w;
		for(auto i:work) {
			if(i.first == w) {
				if(i.second <= d+5) {
					flag = true;
					temp = i.second;
				}
			}
		}
		if(flag) {
			if(temp <= d) printf("Case %d: Yesss\n", ++c);
			else printf("Case %d: Late\n", ++c);
		}else {
			printf("Case %d: Do your own homework!\n", ++c);
		}
	}
	return 0;
}
