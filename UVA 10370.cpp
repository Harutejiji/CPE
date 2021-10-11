#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(cin >> t) {
		int arr[t], good = 0; 
		double sum = 0;
		for(int i=0; i<t; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		sum /= t;
		for(int i=0; i<t; i++) {
			if(arr[i] > sum) good++;
		}
		printf("%.3lf%%\n", (double) good / t * 100);
	}
	return 0;
}
		
