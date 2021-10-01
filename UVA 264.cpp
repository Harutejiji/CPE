#include <bits/stdc++.h>
using namespace std;
int main() {
	int arr[4500] = {0, 1};
	for(int i=2; i<4500; i++) {
		arr[i] = arr[i-1] + i;
	}
	int n;
	while(cin >> n) {
		int i=1;
		for(;n > arr[i]; i++);
		if(i%2) {
			cout << "TERM " << n << " IS " << arr[i] - n + 1 << "/" << n - arr[i-1] << endl;
		}else {
			cout << "TERM " << n << " IS " << n - arr[i-1] << "/" << arr[i] - n + 1 << endl;
		}
	}
	return 0;
}
