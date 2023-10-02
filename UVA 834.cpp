#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, temp, ans;
	while(cin >> n >> m) {
		vector<int> v;
		while(n%m) {
			ans = n/m;
			v.push_back(ans);
			temp = m;
			m = n%m;
			n = temp;
		}
		v.push_back(n/m);
		cout << '[' << v[0];
		for(int i=1; i<v.size(); i++) {
			if(i == 1) cout << ';' << v[i];
			else cout << "," << v[i];
		}
		cout << "]\n";
	}
	return 0;
}
