#include <bits/stdc++.h>
using namespace std;
int main() {
	string s, l;
	int n, sum;
	while(cin >> s && s != "0") {
		int de = 0;
		bool flag = false;
		l = s;
		while(s != "0") {
			if (flag) break;
			n = 0;
			for(int i=0; i<s.size(); i++) {
				n += s[i] - '0';
			}
			if(n % 9) break;
			s = to_string(n);
			de++;
			if(s.size() == 1) flag = true;
		}
		if (n % 9) cout << l << " is not a multiple of 9.\n";
		else cout << l << " is a multiple of 9 and has 9-degree " << de << ".\n";
	}
	return 0;
}
