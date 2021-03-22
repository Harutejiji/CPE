#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0;
	while(cin >> t) {
		int arr[t];
		bool flag[20001] = {false}, ans = true;
		for(int i=0; i<t; i++) {
			cin >> arr[i];
		}
		for(int i=0; i<t; i++) {
			for(int j=i+1; j<t; j++) {
				if(flag[arr[i] + arr[j]]) ans = false;
				flag[arr[i] + arr[j]] = true;
			}
		}
		if(ans) printf("Case #%d: It is a B2-Sequence.\n\n", ++c);
		else printf("Case #%d: It is not a B2-Sequence.\n\n", ++c);
	}
	return 0;
}
