#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin >> n && n) {
		int ans[103] = {0};
		for(int i=2; i<=n; i++) {
			int x=2, temp = i;
			while(temp > 1) {
				if(temp % x == 0) {
					temp /= x;
					ans[x]++;
				}
				else x++;
			}
		}
		printf("%3d! =", n);
		int end = 0;
		for(int i=2; i<=n; i++) {
			if(ans[i]) {
				if(end == 15) {
					cout << endl << "      ";
					printf("%3d", ans[i]);
					end = 0;
				}
				else {
					printf("%3d", ans[i]);
					end++;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
