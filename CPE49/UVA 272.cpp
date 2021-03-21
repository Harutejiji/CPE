#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	bool flag = false;
	while(getline(cin, s)) {
		for(int i=0; i<s.size(); i++) {
			if(s[i] == '"') {
				if(flag) {
					cout << "''";
					flag = !flag;
				}else{
					cout << "``";
					flag = !flag;
				}
			}else{
				cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}
