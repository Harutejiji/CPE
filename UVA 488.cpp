#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, m;
	cin >> t;
	while(t--) {
		cin >> n >> m;		
		for(int i=0; i<m; i++) {
			for(int j=1; j<=n; j++) {
				for(int k=0; k<j; k++) cout << j;
				cout << endl;
			}
			for(int j=n-1; j>0; j--) {
				for(int k=0; k<j; k++) cout << j;
				cout << endl;
			}
			if(t==0 && i==m-1) break;
			cout << endl;
		}
	}
}
