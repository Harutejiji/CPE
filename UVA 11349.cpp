#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, c = 0;
	cin >> t;
	char s;
	while(t--) {
		cin >> s >> s >> n;
		long long arr[n][n];
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cin >> arr[i][j];
			}
		}
		bool flag = true;
		for(int i=0; i<=n/2 && flag; i++) {
			for(int j=0; j<n && flag; j++) {
				if(arr[i][j] < 0 || arr[i][j] != arr[n-i-1][n-j-1]) flag = false;
			}
		}
		if (flag) printf("Test #%d: Symmetric.\n", ++c);
		else printf("Test #%d: Non-symmetric.\n", ++c);
	}
	return 0;
}
