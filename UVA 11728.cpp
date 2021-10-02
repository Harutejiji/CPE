#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int main() {
	int n, c = 0, arr[N];
	memset(arr, -1, sizeof(arr));
	for(int i=1; i<=N; i++) {
		int sum = 0;
		for(int j=1; j<=i; j++) {
			if(i % j == 0) sum += j;
		}
		if(sum <= 1000) arr[sum] = i;
	}
	while(cin >> n && n) {
		printf("Case %d: %d\n", ++c, arr[n]);
	}
	return 0;
} 
