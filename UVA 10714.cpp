#include <bits/stdc++.h>
using namespace std;
int diff(int x, int y) 	{
	if(x > y) return x - y;
	else return y - x;
}
int main() {
	int t, l, n;
	cin >> t;
	while(t--) {
		cin >> l >> n;
		int mintime = 0, maxtime = 0;
		while(n--) {
			int a;
			cin >> a;
			int temp1, temp2;
			temp1 = min(a, diff(l, a));
			mintime = max(mintime, temp1);
			temp2 = max(a, diff(l, a));
			maxtime = max(maxtime, temp2);
		}
		cout << mintime << " " << maxtime << endl;
	}
	return 0;
}
			
