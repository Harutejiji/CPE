#include <bits/stdc++.h>
using namespace std;
int cnt(int x, int y) {
	int k = x + y, sum = k * (k+1) / 2;
	int diff = x - y, diffmax = k;
	return sum + (diff+diffmax)/2 + 1;
}
int main() {
	int T,Case = 0, count;
	cin >> T;
	while(T--) {
		Case++;
		int a[4] = {0};
		for(int i=0; i<4; i++) cin >> a[i];
		printf("Case %d: %d\n", Case, abs(cnt(a[2], a[3]) - cnt(a[0], a[1])));
	}
	return 0;
}
