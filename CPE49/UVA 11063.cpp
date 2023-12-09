#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0;
	while(cin >> t) {
		int arr[t];
		for(int i=0; i<t; i++) {
			cin >> arr[i];
		}
		map<int, int> m;
		for(int i=0; i<t-1; i++) {
			for(int j=i; j<t; j++) {
				m[arr[i]+arr[j]]++;
			}
		}
		bool flag = true;
		for(auto i:m) if(i.second > 1) flag = false;
		if(flag) printf("Case #%d: It is a B2-Sequence.\n\n", ++c);
		else printf("Case #%d: It is not a B2-Sequence.\n\n", ++c);
	}
	return 0;
}
