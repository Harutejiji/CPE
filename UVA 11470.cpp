#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0;
	while(cin >> t && t) {
		int arr[t][t];
		printf("Case %d:", ++c);
		for(int i=0; i<t; i++) {
			for(int j=0; j<t; j++) {
				cin >> arr[i][j];
			}
		}
		int a = 0, b = t-1, c = 0, d = t-1;
		while(a <= b) {
			int sum = 0;
			if(a == b && b == c) {
				cout << " " << arr[a][b];
				break;
			}
			for(int i=a; i<b; i++) {
				sum += arr[i][c] + arr[i+1][d];
			}
			for(int i=c; i<d; i++) {
				sum += arr[c][i+1] + arr[d][i];
			}
			cout << " " << sum;
			a++;
			b--;
			c++;
			d--;
		}
		cout << endl;
	}
	return 0;
}
