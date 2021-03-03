#include <bits/stdc++.h>
using namespace std;
int main() {
	int T, n, m, Case = 0;
	cin >> T;
	while(T--) {
		int temp;
		Case++;
		cin >> n;
		m = pow(n, 2);
		string s = to_string(m);
		while(m) {
			temp = 0;
			s = "";
			for(int i=0; i<s.size(); i++) {
				temp += pow(s[i] - '0', 2);
			}
			s = to_string(temp);
			cout << s;
			if ((s[0] - '0') == n) break;
			if ((s[0] - '0') == 1) break;
		}
		//if ((s[0]-'0') == n) cout << "Case #" << Case << " :" << n << " is an Unhappy number.\n";
		//else cout << "Case #" << Case << " :" << n << " is a Happy number.\n";
	}
	return 0;
}
