#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, m;
	cin >> t;
	char key[] = "ACGT";
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
			}
			if(maxi == mini && mm.size() > 1 && maxi > 1) ans += maxi;
			else if(mini > 1 && maxi > mini) ans += mini;
			else ans += mm.size() - 1;
			if(maxi == mini) {
				for(int i=0; i<4; i++) {
					if(mm[key[i]]) {
						cout << key[i];
						break;
					}
				}
			}else {
				for(auto i:mm) {
					if(i.second == maxi) cout << i.first;
				}
			}
			mm.clear();
		}
		cout << endl << ans << endl;
	}
	return 0;
}
