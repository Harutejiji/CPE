#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0;
	cin >> t;
	while(t--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int maxi = x2 + y2, mini = x1 + y1;
		maxi = (maxi +1) * maxi / 2;
		mini = (mini +1) * mini / 2;
		maxi += x2, mini += x1;
		printf("Case %d: %d\n", ++c, maxi - mini);
	}
	return 0;
}
