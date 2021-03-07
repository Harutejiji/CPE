#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, t = 0;
	while(cin >> n >> m && n && m) {
		t++;
		if(t>1) cout << endl;
		char map[n+2][m+2];
		memset(map, '.', sizeof(map));
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				cin >> map[i][j];
			}
		}
		int move[8][2] = {
			{-1, 0}, {-1, 1}, 
			{0, 1}, {1, 1}, 
			{1, 0}, {1, -1}, 
			{0, -1}, {-1, -1}
			};
		printf("Field #%d:\n", t);
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				if(map[i][j] == '*') {
					cout << '*';
					continue;
				}
				int ans = 0;
				for(int k=0; k<8; k++) {
					if(map[i+move[k][0]][j+move[k][1]] == '*') ans++;
				}
				cout << ans;
			}
			cout << endl;
		}
	}
	return 0;
}
