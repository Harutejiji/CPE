#include <bits/stdc++.h>
using namespace std;
/*
   W
  S N
   E
 */
string dirStr = "NESW";
bool isv[51][51]; // maxi index = 50
int main() {
	int n, m, x, y;
	char dir;
	string command;
	cin >> n >> m;
	// init the map
	memset(isv, 0, sizeof(isv));
	while(cin >> x >> y >> dir >> command) {
		int dirInt = -1;
		for(int i=0; i<4; i++) // mapping
			if (dir == dirStr[i]) {
				dirInt = i;
				break;
			}
		/*
		         (0, 1)
		  (1, 0) (1, 1) (1, 2)
		         (2, 1)
		 */
		int forward[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
		bool isLost = false;
		for(int i=0; i<command.size(); i++) {
			//cout << x << " " << y << " ( " << dirStr[dirInt] << " )\n"; // debug
			if (command[i] == 'R') {
				dirInt = (dirInt + 1) % 4; // N->E, E->S, S->W, W->N
			} else if (command[i] == 'L') { // N->W, W->S, S->E, E->N
				/*
				  dirInt + 4 => NESW -> NESW(NESW)
				  dirInt - 1 => NESW(NESW) -> NES(WNES)W
				  dirInt % 4 => NES(WNES)W -> (NESW)NESW
				*/
				dirInt = (dirInt + 4 - 1) % 4;
			} else { // F
				int tx = x + forward[dirInt][0],
					ty = y + forward[dirInt][1];
				if (tx > n || tx < 0 || ty > m || ty < 0) {
					if (isv[x][y]) continue; // ignore
					isv[x][y] = isLost = true; // drop
					break;
				}
				x = tx, y = ty; // new position
			}
		}
		printf("%d %d %c", x, y, dirStr[dirInt]);
		if (isLost) cout << " LOST";
		cout << endl;
	}
    return 0;
}
