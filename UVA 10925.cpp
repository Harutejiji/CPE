#include <bits/stdc++.h>
using namespace std;
int main() {
	long long sum, bill, temp; 
	int c = 0, n, m;
	while(cin >> n >> m && n && m) {
		sum = 0;
		while(n--) {
			cin >> temp;
			sum += temp;
		}
		bill = sum / m;
		printf("Bill #%d costs %lld: each friend should pay %lld\n\n", ++c, sum, bill);
	}
	return 0;
}
