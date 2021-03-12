#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int arr[5][5];
		bool ans[5][5];
		memset(ans, false, sizeof(ans));
		for(int i=0; i<5; i++) {
			for(int j=0; j<5; j++) {
				if(i == 2 && j == 2) {
					ans[i][j] = true;
					continue;
				}
				cin >> arr[i][j];
			}
		}
		int a;
		for(int i=1; i<=75; i++) {
			cin >> a;
			for(int j=0; j<5; j++) {
				for(int k=0; k<5; k++) {
					if(a == arr[j][k]) ans[j][k] = true;
				}
			}
			if (i >= 4) {
				for(int j=0; j<5; j++) {
					
				
