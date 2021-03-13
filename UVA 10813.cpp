#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int arr[5][5] = {};
		bool ans[5][5] = {};
		memset(ans, false, sizeof(ans));
		for(int i=0; i<5; i++) {
			for(int j=0; j<5; j++) {
				if(i == 2 && j == 2) {
					ans[i][j] = true;
				}
				else cin >> arr[i][j];
			}
		}
		vector <int> v;
		int a, count;
		bool flag = false;
		for(int i=1; i<=75; i++) {
			cin >> a;
			v.push_back(a);
		}
		for(int i=0; i<75; i++) {
			for(int j=0; j<5; j++) {
				for(int k=0; k<5; k++) {
					if(v[i] == arr[j][k]) ans[j][k] = true;
				}
			}
			for(int j=0; j<5; j++) {
				count = 0;
				for(int k=0; k<5; k++) {
					if (ans[j][k]) count++;
					if (count == 5) break;
				}
				if (count == 5) {
					flag = true;
					break;
				}
			}
			for(int j=0; j<5; j++) {
				count = 0;
				for(int k=0; k<5; k++) {
					if (ans[k][j]) count++;
					if (count == 5) break;
				}
				if (count == 5) {
					flag = true;
					break;
				}
			}
			if(ans[0][0] && ans[1][1] && ans[3][3] && ans[4][4]) flag = true;
			if(ans[0][4] && ans[1][3] && ans[3][1] && ans[4][0]) flag = true;
			if(flag) {
				printf("BINGO after %d numbers announced\n",i+1);
				break;
			}
		}
	}
	return 0;
}
