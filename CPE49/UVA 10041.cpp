#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, maxi = 0, mini = INT_MAX, sum = 0;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
			maxi = max(maxi, arr[i]);
		}
		for(int i=1; i<=maxi; i++) {
			for(int j=0; j<n; j++) {
				sum += abs(arr[j] - i);
			}
			mini = min(sum, mini);
			sum = 0;
		}
		cout << mini << endl;
	}
	return 0;
}
