#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	char map[n+1][m+1] = {};
	int x, y;
	char c;
	string s;
	while(cin >> x >> y >> c) {
		cin >> s;
		bool l = false;
		for(int i=0; i<s.size(); i++) {
			if (s[i] == 'R') {
				if (c == 'E') c = 'S';
				else if (c == 'S') c = 'W';
				else if (c == 'W') c = 'N';
				else if (c == 'N') c = 'E';
			}
			if (s[i] == 'L') {
				if (c == 'E') c = 'N';
				else if (c == 'S') c = 'E';
				else if (c == 'W') c = 'S';
				else if (c == 'N') c = 'W';
			}
			if (s[i] == 'F') {
				if (c == 'E') {
					if (map[x][y] == '?'){
						if (x+1 > n) continue;
						else x += 1;
						continue;
					}
					x += 1;
				}else if (c == 'S') {
					if (map[x][y] == '?'){
						if (y-1 < 0) continue;
						else y -= 1;
						continue;
					}
					y -= 1;
				}else if (c == 'W') {
					if (map[x][y] == '?'){
						if (x-1 < 0) continue;
						else x -= 1;
						continue;
					}
					x -= 1;
				}else if (c == 'N') {
					if (map[x][y] == '?'){
						if (y+1 > m) continue;
						else y += 1;
						continue;
					}
					y += 1;
				}
			}
			if(x > n || x < 0 || y > m || y < 0) {
 
				if (x < 0) {
					map[0][y] = '?';
					l = true;
					x += 1;
					break;
				}else if (x > n) {
					map[n][y] = '?';
					l = true;
					x -= 1;
					break;
				}else if (y > m) {
					map[x][m] = '?';
					l = true;
					y -= 1;
					break;
				}else if (y < 0) {
					map[x][0] = '?';
					l = true;
					y += 1;
					break;
				}
			}
		}
		cout << x << " " << y << " " << c;
		if(l) cout << " " << "LOST" << endl;
		else cout << endl;
	}
	return 0;
}
