#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n, m;
	string s;
	while(cin >> s && s != "0") {
		int c = 0;
		set<int> vis;
		cout << "Original number was " << s << endl;
		sort(s.begin(), s.end());
		while(1) {
			stringstream ss;
			ss << s;
			ss >> n;
			reverse(s.begin(), s.end());
			ss.clear();
			ss << s;
			ss >> m;
			cout << m << " - " << n << " = " << m - n << endl;
			ss.str("");
			ss.clear();
			ss << m - n;
			ss >> s;
			sort(s.begin(), s.end());
			if (vis.find(m - n) != vis.end()) break;	
			vis.insert(m - n);
		}
		cout << "Chain length " << vis.size()+1 << endl << endl;	
	}
	return 0;
}
