#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	string s;
	while(cin >> t) {
		char map[t+2][t+2], map1[t][t];
		memset(map, '.', sizeof(map));
		for(int i=1; i<=t; i++) {
			for(int j=1; j<=t; j++) {
				cin >> map[i][j];
			}
		}
		int move[8][2]={{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};
		for(int i=0; i<t; i++) {
			for(int j=0; j<t; j++) {
				cin >> map1[i][j];
			}
		}
		for(int i=0; i<t; i++) {
			for(int j=0; j<t; j++) {
				if(map1[i][j] == '.') {
					cout << ".";
					continue;
				}
				int sum = 0;
				for(int k=0; k<8; k++) {
					if(map[i+1+move[k][0]][j+1+move[k][1]] == '*') sum++;
				}
				cout << sum;
			}
			if(i == t-1) break;
			cout << endl;
		}
	}
	return 0;
}
