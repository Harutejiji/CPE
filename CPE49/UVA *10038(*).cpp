#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	while(cin >> t) {
		int arr[t];
		bool cnt[t] = {false}, ans = true;
		for(int i=0; i<t; i++) cin >> arr[i];
		for(int i=1; i<t; i++) {
			int diff = abs(arr[i] - arr[i-1]);
			if(diff>=t || cnt[diff] || diff == 0){//此處題目沒提到
				ans = false;
				break;
			}
			cnt[diff] = true;
		}
		if (ans) cout << "Jolly" << endl;
		else cout << "Not jolly" << endl;
	}
	return 0;
}
