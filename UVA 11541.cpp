#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0, n;
	cin >> t;
	cin.get();
	string s;
	char d;
	while(t--) {
		vector< pair<char, int> > v;
		printf("Case %d: ", ++c);
		while(cin.get(d) && d != '\n') {
			cin >> n;
			while(n) {
				cout << d;
				n--;
			}
		}
		cout << endl;
	}
	return 0;
}
