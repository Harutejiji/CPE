#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	const int c = 9;
	while(cin >> n) {
		int arr[4], deg = 1080;
		for(int i=0; i<3; i++) cin >> arr[i];
		if (n == 0 && arr[0] == 0 && arr[1] == 0 && arr[2] == 0) break;
		if (n == arr[0] && n == arr[2] && n == arr[1]) {
			cout << deg << endl;
			continue;
		}
		if(arr[0] > n) deg += (40 - (arr[0] - n)) * c;
		else deg += (n - arr[0]) * c;
		if(arr[1] > arr[0]) deg += (arr[1] - arr[0]) * c;
		else deg += (40 - (arr[0] - arr[1])) * c;
		if (arr[2] > arr[1]) deg += (40 - (arr[2] - arr[1])) * c;
		else deg += abs(arr[1] - arr[2]) * c;
		cout << deg << endl;
	}
	return 0;
}
