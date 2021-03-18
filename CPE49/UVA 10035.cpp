#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	while(cin >> a >> b && a != "0" && b != "0") {
		int carry = 0, result = 0, i = a.size() - 1, j = b.size() - 1, ans = 0;
		for(;i >= 0 && j >= 0; i--, j--) {
			result = (a[i] - '0') + (b[j] - '0') + carry;
			carry = result / 10;
			ans += result / 10;
		}
		for(;i >= 0; i--) {
			result = (a[i] - '0') + carry;
			carry = result / 10;
			ans += result / 10;
		}
		for(;j >= 0; j--) {
			result = (b[j] - '0') + carry;
			carry = result / 10;
			ans += result / 10;
		}
		if(ans > 1) cout << ans << " carry operations.\n";
		else if (ans == 1) cout << "1 carry operation.\n";
		else cout << "No carry operation.\n";
	}
	return 0;
}
