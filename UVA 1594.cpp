#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while(cin >> n) {
		int a;
		int arr[1000][n];
		for(int i=0; i<n; i++) cin >> arr[0][i];
		for(int i=1; i<1000; i++) {
			for(int j=0; j<n; j++) {
				if (j == n-1) arr[i][j] = abs(arr[i-1][j] - arr[i-1][0]);
				else arr[i][j] = abs(arr[i-1][j] - arr[i-1][j+1]);
			}
		}
		for(int i=0; i<1000; i++) {
			a = 0;
			for(int j=0; j<n; j++) {
				if(arr[i][j] == 0) a++;
			}
			if(a == n) break;
		}
		if(a == n) cout << "ZERO" << endl;
		else cout << "LOOP" << endl;
	}
	return 0;
}
