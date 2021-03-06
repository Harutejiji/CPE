#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	while(cin >> n >> m) {
		bool ans[n+1]; 
		int temp;
		memset(ans, true, n+1);
		for(int i=0; i<m; i++) {
			cin >> temp;
			ans[temp] = false;
		}
		if(n == m) {
			cout << "*" << endl;
		} else {
			for(int j=1; j<=n; j++) {
				if(ans[j]) cout << j << " ";
			}		
			cout << endl;
		}
	}
	return 0;
}
