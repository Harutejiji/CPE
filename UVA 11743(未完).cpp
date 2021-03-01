#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--) {
		string s, m, l;
		int a=0, b=0, temp;
		for(int i=0; i<4; i++) {
			cin >> s;
			for(int i=0; i<4; i++){
				if(i % 2 == 0){
					temp = (s[i]-'0') * 2;
					l = to_string(temp);
					m += l;
				}else if(i % 2) {
					b += s[i] - '0';
				}
			}
		}
		for(int i=0; i<m.size(); i++) a += m[i] - '0';
		if((a+b) % 10) cout << "Invalid" << endl;
		else cout << "Valid" << endl;
	}
	return 0;
}			
