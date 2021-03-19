#include <bits/stdc++.h>
using namespace std;
int main() {
	string key = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	string s;
	while(getline(cin, s)) {
		for(int i=0; i<s.size(); i++) {
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 'a' - 'A';
			for(int j=0; j<key.size(); j++) {
				if(s[i] == key[j]) {
					cout << key[j-2];
					break;
				}
				else if(j == key.size()-1) cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}
