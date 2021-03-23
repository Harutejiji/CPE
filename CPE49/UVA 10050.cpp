#include <bits/stdc++.h>
using namespace std;
int solve(int n, int p, int a[]) {
	bool flag[3651] = {false};
	for(int i=0; i<p; i++) {
		for(int j=1; a[i] * j<= n; j++) {
			flag[a[i] * j] = true;
		}
	}
	int ans = 0;
	for(int i=1; i<=n; i++) {
		if(flag[i] == true && !(i % 7 == 6 || i % 7 == 0)) ans++;
	}
	return ans;
}
int main() {
	int T, n, p;
	cin >> T;
	while(T--) {
		cin >> n >> p;
		int a[p];
		for(int i=0; i<p; i++) cin >> a[i];		
		cout << solve(n, p, a) << endl;
	}
	return 0;
}
