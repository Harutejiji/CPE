#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	string s;
	vector<int> v;
	vector<char> b;
	char h[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
	while(cin >> s >> n >> m) {
		int temp = 0;
		for(int i=0; i<s.size(); i++) {
			if (n == 10) {
				temp = stoi(s);
				break;
			}
			if(s[i] == 'A') temp += 10 * pow(n, s.size() - 1 - i);
			else if(s[i] == 'B') temp += 11 * pow(n, s.size() - 1 - i);
			else if(s[i] == 'C') temp += 12 * pow(n, s.size() - 1 - i);
			else if(s[i] == 'D') temp += 13 * pow(n, s.size() - 1 - i);
			else if(s[i] == 'E') temp += 14 * pow(n, s.size() - 1 - i);
			else if(s[i] == 'F') temp += 15 * pow(n, s.size() - 1 - i);
			else temp += (s[i] - '0') * pow(n, s.size() - 1 - i);
		}
		if (m > 10) {
			v.clear();
			string d = "";
			while(temp) {
				v.push_back(temp%m);
				temp /= m;
			}
			reverse(v.begin(), v.end());
			for(int i=0; i<v.size(); i++) {
				if(v[i] >= 10) d += h[v[i] - 10];
				else d += (char)v[i]+'0';
			}
			if(d.size()>7) d.erase(0, d.size()-7);
			printf("%07s\n" , d.c_str());
		}
		else if (m <= 10) {
			b.clear();
			string d = "";
			while(temp) {
				b.push_back(temp%m);
				temp /= m;
			}
			reverse(b.begin(), b.end());
			for(int i=0; i<b.size(); i++) {
				d += b[i]+'0';
			}
			if(d.size()>7) d.erase(0, d.size()-7);
			printf("%07s\n" , d.c_str());
		}
	}
	return 0;
}
