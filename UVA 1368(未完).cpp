#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, m;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		char dna[n][m];
		map <char, int> mm;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				cin >> dna[i][j];
			}
		}
		int ans = 0;
		for(int i=0; i<m; i++) {
			int mini = INT_MAX , maxi = 0;
			for(int j=0; j<n; j++) {
				mm[dna[j][i]]++;
			}
			for(auto i:mm) {
				mini = min(mini, i.second);
				maxi = max(maxi, i.second);
				if(mini != maxi) ans += mini;
			}
			for(auto i:mm) {
				if(i.second == maxi) cout << i.first;
			}
			mm.clear();
		}
		cout << endl << ans << endl;
	}
	return 0;
}
