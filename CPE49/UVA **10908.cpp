#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--) {
		int n, m, l, a, b;
		cin >> n >> m >> l;
		char maps[n][m];
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				cin >> maps[i][j];
			}
		}
		printf("%d %d %d\n", n, m, l);
		while(l--) {
			bool flag = false;
			cin >> a >> b;
			int ans = 0;
			char mid = maps[a][b];
			while(++ans) {
				int ta = a - ans, tb = b - ans;
				if (ta < 0 || tb < 0 || a + ans >= n || b + ans >= m) {
					cout << ans*2 - 1 << endl;
					break;
				}
				for (int i=0; i<2*ans+1; i++) {
					for (int j=0; j<2*ans+1; j++) {
						if(maps[ta+i][tb+j] != mid) {
							flag = true;
						}
					}
				}
				if(flag) {
					cout << ans*2 - 1 << endl;
					break;
				}
			}
		}
	}
	return 0;
}
