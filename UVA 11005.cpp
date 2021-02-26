#include <bits/stdc++.h>
using namespace std;
int main() {
	int T, Case = 0;
	cin >> T;
	while(T--) {
		int cost[40], a;
		Case++;
		for(int i=0; i<36; i++) cin >> cost[i];
		cout << "Case " << Case << ":\n";
		cin >> a;
		while(a--) {
			int maxi = INT_MAX, sum[40] = {0};
			int n;
			cin >> n;
			for(int i=2; i<=36; i++) {
				int temp = n;
				while(temp) {
					sum[i] += cost[temp % i];
					temp /= i;
				}
				if(sum[i] < maxi) maxi = sum[i];
			}
			cout << "Cheapest base(s) for number " << n << ":";
			for(int i=2; i<=36; i++) if(sum[i] == maxi) cout << " " << i;
			cout << endl;
		}
		if(T >= 1) cout << endl;
	}
	return 0;
}
