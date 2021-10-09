#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	stringstream ss;
	vector<int> v;
	char hex[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	while(getline(cin, s) && s != "-1") {
		int n, temp;
		v.clear();
		ss.clear();
		ss.str("");
		if(s[1] == 'x') {
			for(int i=s.size() - 1, j = 0; i > 1; i--, j++) {
				n += (s[i] - '0') * pow(16, j);
			}
			cout << n << endl;
		}else {
			ss << s;
			ss >> temp;
			while(temp) {
				v.push_back(temp % 16);
				temp /= 16;
			}
			cout << "0x";
			for(int i=v.size() - 1; i>=0; i--) {
				if (v[i] > 9) {
					cout << hex[v[i] % 10];
				}else {
					cout << v[i];
				}
			}
			cout << endl;
		}
	}
	return 0;
}
