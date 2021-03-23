#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	while(cin >> t) {
		int n[t], count = 0;
		for(int i=0; i<t; i++) cin >> n[i];
		sort(n, n+t);
		int mid = n[(t-1)/2];
		for(int i=0; i<t; i++) if (mid == n[i] || n[t/2]== n[i]) count++;
		printf("%d %d %d\n", mid, count, n[t/2] - mid + 1);
	}
	return 0;
}
