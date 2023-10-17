#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, x, y;
	cin >> n >> m;
	char b;
	string a;
	bool sign[51][51] = {false};
	memset(sign, false, sizeof(sign));
	while(cin >> x >> y >> b >> a) {
		bool lost = false;
		for(int i=0; i<a.size(); i++) {
			if(a[i] == 'R') {
				if(b == 'N') b = 'E';
				else if(b == 'E') b = 'S';
				else if(b == 'S') b = 'W';
				else if(b == 'W') b = 'N';
			}
			if(a[i] == 'L') {
				if(b == 'N') b = 'W';
				else if(b == 'E') b = 'N';
				else if(b == 'S') b = 'E';
				else if(b == 'W') b = 'S';
			}
			if(a[i] == 'F') {
				if(b == 'N')  {
					if(y+1 > m && !sign[x][y]) {
						sign[x][y] = true;
						lost = true;
						break;
					}
					if(sign[x][y]) {
						if(y+1 > m) continue;
						/*else {
							y += 1;
							continue;
						}*/
					}
					y += 1;
				}
				else if(b == 'E'){
					if(x+1 > n && !sign[x][y]) {
						sign[x][y] = true;
						lost = true;
						break;
					}
					if(sign[x][y]) {
						if(x+1 > n) continue;
						/*else {
							x += 1;
							continue;
						}*/
					}
					 x += 1;
				}
				else if(b == 'S')  {
					if(y-1 < 0 && !sign[x][y]) {
						sign[x][y] = true;
						lost = true;
						break;
					}
					if(sign[x][y]) {
						if(y-1 < 0) continue;
						/*else {
							y -= 1;
							continue;
						}*/
					}
					y -= 1;
				}
				else if(b == 'W')  {
					if(x-1 < 0 && !sign[x][y]) {
						sign[x][y] = true;
						lost = true;
						break;
					}
					if(sign[x][y]) {
						if(x-1 < 0) continue;
						/*else {
							x -= 1;
							continue;
						}*/
					}
					x -= 1;
				}
			}
		}
		printf("%d %d %c", x, y, b);
		if(lost) cout << " LOST\n";
		else cout << endl;
	}
	return 0;
}
		
