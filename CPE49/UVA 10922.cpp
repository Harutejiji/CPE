#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int sum;
	while(cin >> s && s != "0") {
		int c = 0;
		string l = s;
		while(l != "0") {
			sum = 0;
			for(int i=0; i<l.size(); i++) {
				sum += l[i]-'0';
			}
			if(sum % 9) break;
			l = to_string(sum);
			c++;
			if(l.size() == 1) break;
		}
		if(sum % 9) cout << s << " is not a multiple of 9.\n";
		else cout << s << " is a multiple of 9 and has 9-degree " << c << ".\n";
	}	
	return 0;
}
