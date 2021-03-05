#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	while(cin >> t) {
		int n[t], count = 0;
		for(int i=0; i<t; i++) cin >> n[i];
		sort(n, n+t);
		if (t % 2) {
			int mid = n[t/2];
			for(int i=0; i<t; i++) if (n[i] == mid) count++;
			printf("%d %d %d\n", mid, count, 1);
			continue;
		}
		else if(t % 2 == 0){
			int mid = n[t/2];
			int midmin = n[t/2-1];
			for(int i=midmin; i<=mid; i++) {
				for(int j=0; j<t; j++) {
					if(i == n[j]) count++;
				}
			}
			printf("%d %d %d\n", midmin, count, mid-midmin+1);
			continue;
		}
	}
	return 0;
}	
