#include <bits/stdc++.h>
using namespace std;
int main() {
	string s, d;
	while(getline(cin, s) && getline(cin, d)) {
		map<char, int> ss, dd;
		for(int i=0; i<s.size(); i++) ss[s[i]]++;
		for(int i=0; i<d.size(); i++) dd[d[i]]++;
		for(int i='a'; i<='z'; i++) {
			if(ss[i] && dd[i]) {
				for(int j=min(ss[i], dd[i]); j>0; j--) {
					cout << (char)i;
				}
			}
		}	
		cout << endl;
	}
	return 0;
}
