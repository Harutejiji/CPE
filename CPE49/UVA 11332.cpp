#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	while(cin >> s && s != "0") {
		while(s.size() > 0) {
			int n = 0;
			if(s.size() == 1) {
				cout << s << endl;
				break;
			}else {
				for(int i=0; i<s.size(); i++) {
					n += s[i] - '0';
				}
				s = to_string(n);
			}
		}
	}
	return 0;
}
