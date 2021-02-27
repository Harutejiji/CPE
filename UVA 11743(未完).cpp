#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--) {
		string s, ans;
		int a=0, b=0;
		vector<char> v;
		for(int i=0; i<4; i++) {
			cin >> s;
			v.clear();
			//ans = "";
			//ans = ((s[0] - '0' * 2) + '0') + ans
			v.push_back((s[0]-'0')*2 + '0');
			v.push_back((s[2]-'0')*2 + '0');
			b += s[1] + s[3];
			for(int i=0; i<v.size(); i++) {
				a += v[i];
				cout << v[i] << endl;
			}
			
		}
		//if((a+b) % 10) cout << "Invalid" << endl;
		//else cout << "Valid" << endl;
	}
	return 0;
}			
