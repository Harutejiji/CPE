#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0;
	cin >> t;
	while(t--) {
		int n, h = 0, l = 0;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++) cin >> arr[i];
		for(int i=0; i<n-1; i++) {
			if (n == 1) break;
			if(arr[i] > arr[i+1]) l++;
			else if(arr[i] < arr[i+1]) h++;
		}
		printf("Case %d: %d %d\n", ++c, h, l);
	}
	return 0;
}
