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
			temp += (s[i] - '0') * pow(2, s.size() - 1 - i);
		}
		if (m > 10) {
			v.clear();
			string d = "";
			int ans;
			while(temp) {
				v.push_back(temp%m);
				temp /= m;
			}
			reverse(v.begin(), v.end());
			for(int i=0; i<v.size(); i++) {
				if(v[i] >= 10) d += h[v[i] - 10];
				else d += (char)v[i];
			}
			printf("%07s\n" , d);
		}
		else if (m <= 10) {
			b.clear();
			string d = "";
			int ans;
			while(temp) {
				b.push_back(temp%m);
				temp /= m;
			}
			reverse(b.begin(), b.end());
			for(int i=0; i<b.size(); i++) {
				d += b[i];
			}
			printf("%07s\n" , d);
		}
	}
	return 0;
}
				
