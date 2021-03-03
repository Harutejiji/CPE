#include <bits/stdc++.h>
using namespace std;
int main() {
	long long T, n, m, Case = 0;
	cin >> T;
	while(T--) {
		Case++;
		cin >> n;
		string s = to_string(n);
		while(Case) {
			long long temp = 0;
			for(int i=0; i<s.size(); i++) {
				temp += ((s[i] - '0') * (s[i] - '0'));
			}
			s = to_string(temp);
			if (s.size() == 1) {
				if ((s[0] - '0') == n) break;
				else if ((s[0] - '0') == 1) break;				
			}
		}
		if ((s[0] - '0') == n) cout << "Case #" << Case << ": " << n << " is an Unhappy number.\n";
		else cout << "Case #" << Case << ": " << n << " is a Happy number.\n";
	}
	return 0;
}
