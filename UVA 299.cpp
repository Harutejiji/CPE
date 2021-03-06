#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while(cin >> n) {
		int arr[n], cnt = 0;
		for(int i=0; i<n; i++) cin >> arr[i];
		for(int i=n-1; i>0; i--) {
			for(int j=0; j<i; j++) {
				if(arr[j] > arr[j+1]) {
					swap(arr[j], arr[j+1]);
					cnt++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", cnt);
	}
	return 0;
}
