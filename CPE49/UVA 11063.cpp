#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0;
	while(cin >> t) {
		bool flag = true;
		int arr[t];
		for(int i=0; i<t; i++) cin >> arr[i];
		map<int, int>m;
		for(int i=0; i<t; i++) {
			if(arr[i] < 0) {
				flag = false;
				break;
			}
			if(arr[i] >= arr[i+1] && (i+1) < t) {
				flag = false;
				break;
			}
			for(int j=i; j<t; j++) {
				m[arr[i]+arr[j]]++;
			}
		}
		if(flag)for(auto i:m) if(i.second >1) flag = false;
		if(flag) printf("Case #%d: It is a B2-Sequence.\n\n", ++c);
		else printf("Case #%d: It is not a B2-Sequence.\n\n", ++c);
	}
	return 0;
}

/*int main() {
	int t, c = 0;
	while(cin >> t) {
		bool sum[10001] = {false}, flag = true;
		int arr[t];
		for(int i=0; i<t; i++) cin >> arr[i];
		for(int i=0; i<t; i++) {
			if(arr[i] >= arr[i+1]) {
				flag = false;
				break;
			}
			for(int j=i; j<t; j++) {
				if(sum[arr[i] + arr[j]]){
					flag = false;
					break;
				}
				sum[arr[i] + arr[j]] = true;
			}
		}
		if(flag) printf("Case #%d: It is a B2-Sequence.\n\n", ++c);
		else printf("Case #%d: It is not a B2-Sequence.\n\n", ++c);
	}
	return 0;
}*/
