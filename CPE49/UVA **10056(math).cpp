#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, k;
	cin >> t;
	while(cin >> n) {
		double p, q, ans;
		cin >> p >> k;
		q = 1 - p;
		if(p < 1e-7) {
			printf("%.4lf\n", 0.0);
			continue;
		}
		if(k == 1) {
			printf("%.4lf\n", p / (1 - pow(q, n)));
		}else{
			printf("%.4lf\n", p * pow(q, k-1) / ( 1 - pow(q, n)));
		}
	}
	return 0;
}		
