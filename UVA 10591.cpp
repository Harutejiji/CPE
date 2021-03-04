#include <bits/stdc++.h>
using namespace std;
int main() {
	long long T, n, Case = 0;
	cin >> T;
	while(T--) {
		Case++;
		cin >> n;
		string s = to_string(n);
		string d = s;
		while(Case) {
			long long temp = 0;
			for(int i=0; i<s.size(); i++) {
				temp += ((s[i] - '0') * (s[i] - '0'));
			}
			s = to_string(temp);
			if (s == d) break;
			if (s == "1") break;
		}
		if (s == d) cout << "Case #" << Case << ": " << n << " is an Unhappy number.\n";
		else cout << "Case #" << Case << ": " << n << " is a Happy number.\n";
	}
	return 0;
}
