#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while(t--) {
		int move[8][2] {{-1, -1}, {-1, 0}, {-1, 1}, 
					{0, -1}, {0, 1}, 
					{1, -1}, {1, 0}, {1, 1}};
		cin >> n;
		char map[n+2][n+2], w[n+2][n+2], ans[n][n], a;
		memset(map, '.', sizeof(map));
		memset(w, '.', sizeof(w));
		memset(ans, '.', sizeof(ans));
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				cin >> map[i][j];
			}
		}
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				cin >> w[i][j];
			}
		}
		stringstream ss;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				int m = 0;
				if(w[i][j] == '.') break;
				for(int k=0; k<8; k++) {
					if(map[i + move[k][0]][j + move[k][1]] == '*') m++;
				}
				ss << m;
				ss >> a;
				ans[i-1][j-1] = a;
				ss.str("");
				ss.clear();
			}
		}
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout << ans[i][j];
			}
			if(i<n-1) cout << endl;
		}
	}
	return 0;
}
			
		
