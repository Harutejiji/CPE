#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		bool flag = false;
		int m;
		string s;
		cin >> s >> m;
		int arr[m];
		for(int i=0; i<m; i++) cin >> arr[i];
		for(int i=0; i<m; i++) {
			if(n % arr[i]) {
				flag = true;
				break;
			}
		}
		if(flag) cout << n << " - Simple.\n";
		else cout << n << " - Wonderful.\n";
	}
	return 0;
}
