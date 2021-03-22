#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	while(cin >> s) {
		int i = 0, sum = 0, ans = 1;
		while(s[i] == '+' || s[i] == '-') i++;
		for(; i<s.size(); i++) {
			int temp;
			if (s[i] <= '9') temp = s[i] - '0';
			else if (s[i] <= 'Z') temp = s[i] - 'A' + 10;
			else if (s[i] <= 'z') temp = s[i] - 'a' + 26 + 10;
			ans = max(temp, ans);
			sum += temp;
		}
		while(sum % ans != 0 && ans < 62) ans++;
		if (sum % ans == 0) cout << ans+1 << endl;
		else cout << "such number is impossible!" << endl;
	}
	return 0;
}
