#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0;
	while(cin >> t) {
		bool flag = true;
		int arr[t];
		for(int i=0; i<t; i++) {
			cin >> arr[i];
		}
		map <int, int> m;
		for(int i=0; i<t-1; i++) {
			for(int j=i+1; j<t ; j++) {
				m[arr[i]+arr[j]]++;
			}
		}
		for(auto i:m)  if(i.second > 1) flag = false;//cout << i.first << " " << i.second << endl;
		if(flag) cout << "Case #" << ++c  << ": It is a B2-Sequence.\n\n";
		else cout << "Case #" << ++c  << ": It is not a B2-Sequence.\n\n";
	}
	return 0;
}
