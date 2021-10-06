#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0;
	while(cin >> t) {
		long long arr[t], n, maxi = 0;
		vector <int> v;
		for(int i=0; i<t; i++) cin >> arr[i];
		for(int i=0; i<t; i++) {
			n = 1;
			for(int j=i; j<t; j++) {
				n *= arr[j];
				maxi = max(n, maxi);
			}
		}
		printf("Case #%d: The maximum product is %lld.\n\n", ++c, maxi);
	}
	return 0;
}
