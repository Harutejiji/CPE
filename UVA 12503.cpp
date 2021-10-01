#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		vector<int> v;
		int p = 0, temp, move;
		cin >> move;
		while(move--) {
			cin >> s;
			if(s[0] == 'L') {
				v.push_back(-1);
				p -= 1;
			}else if(s[0] == 'R') {
				v.push_back(1);
				p += 1;
			}else if(s[0] == 'S'){
				cin >> s >> temp;
				p += v[temp-1];
				v.push_back(v[temp-1]);
			}	
		}
		cout << p << endl;
	} 
	return 0;
}
		
