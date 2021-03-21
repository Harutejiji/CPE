#include <bits/stdc++.h>
using namespace std;
int main() {
	string s[101];
	int n = 0, maxi = 0;
	for(; getline(cin, s[n]); n++) {
		maxi = max(maxi, int(s[n].size()));
	}
	for(int i=0; i<maxi; i++) {
		for(int j=n-1; j>=0; j--) {
			if(i < s[j].size()) cout << s[j][i];
			else if(j!=0) cout << " ";
		}
		cout << endl;
	}
	return 0;
}
