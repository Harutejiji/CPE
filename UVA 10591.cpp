#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	for(int Case=1; Case <= t; Case++) {
		int n;
		cin >> n;
		printf("Case #%d: %d ", Case, n);
		bool exist[1000] = {false};
		while(n != 1) {
			string s = to_string(n);
			n = 0;
			for(int i=0; i<s.size(); i++) {
				n += (s[i]-'0')*(s[i]-'0');
				}
			if(exist[n]) break;
			exist[n] = true;
		}
		if (n == 1) printf("is a Happy number.\n");
		else printf("is an Unhappy number.\n");
	}
	return 0;
}
