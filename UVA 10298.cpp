#include <bits/stdc++.h>
using namespace std;
int main() {	
	string s;
	while(cin >> s && s != ".") {
		int len = s.size();
		int maxi = 0;
		for(int i=1; i<=len; i++) {
			int flag = 1;
			if(len % i != 0) continue;
			for(int j=i; j<len && flag==1; j+=i) {
				for(int k = 0; k<i && flag==1; k++) {
					if(s[k] != s[j+k]) {
						flag = 0;
					}
				}
			}
			if(flag == 1) maxi = max(maxi, len/i);
		}
		if(maxi == 0) cout << 1 << endl;
		else cout << maxi << endl;
	}
	return 0;
}
