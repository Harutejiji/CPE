#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0;
	while(cin >> t) {
		long long arr[t], n;
		bool flag = true;
		vector <int> v;
		for(int i=0; i<t; i++) cin >> arr[i];
		for(int i=0; i<t; i++) {
			if(arr[i] < 0) {
				v.push_back(arr[i]);
				continue;
			}
			if(arr[i] > 0 && flag) {
				n = arr[i];
				flag = false;
			}
			else n = n * arr[i];
		}
		if(v.size() % 2 == 0){
			for(int i=0; i<v.size(); i++) {
				n *= v[i];
			}
		}
		printf("Case #%d: The maximum product is %d.\n\n", ++c, n);
	}
	return 0;
}
