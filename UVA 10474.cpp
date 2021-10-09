#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, c = 0;
	while(cin >> n >> m && n && m) {
		int count = 0, arr[n], a;
		for(int i=0; i<n; i++) cin >> arr[i];
		sort(arr, arr+n);
		cout << "CASE# " << ++c << ":\n";
		while(m--) {
			bool flag = true;
			cin >> a;
			for(int i=0; i<n; i++) {
				if(arr[i] == a) {
					flag = false;
					count = i+1;
					break;
				}
			}
			if(flag) cout << a << " not found\n";
			else cout << a << " found at " << count << endl;
		}
	}
	return 0;
}
