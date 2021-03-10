#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, n;
	while(cin >> a >> b && a && b) {
		set <int> sa, sb, ans;
		for(int i=0; i<a; i++) {
			cin >> n;
			sa.insert(n);
			ans.insert(n);
		}
		for(int i=0; i<b; i++) {
			cin >> n;
			sb.insert(n);
			ans.insert(n);
		}
		cout << min(ans.size() - sa.size(), ans.size() - sb.size()) << endl;
	}
	return 0;
}
