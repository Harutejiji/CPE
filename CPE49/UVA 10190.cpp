#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	while(cin >> n >> m) {
		vector<int> v;
		bool ans = true;
		while(n) {
			if(m == 1) {
				ans = false;
				break;
			}
			if(n%m && n != 1) {
				ans = false;
				break;
			}
			v.push_back(n);
			n /= m;
		}
		if(ans) {
			for(int i=0; i<v.size(); i++) {
				if(i > 0) cout << " " << v[i];
				else cout << v[i];
			}
		}else {
			cout << "Boring!";
		}
		cout << endl;
	}
	return 0;
}
