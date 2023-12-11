#include <bits/stdc++.h>
using namespace std;
int n ,m ,a ,b ,sum ,ok;
string s;
char c;
int main() {	
	while(cin >> n) {
		pair<int, int> M[30];
		map<char, int> mp;
		for(int i=1; i<=n; i++) {
			cin >> c;
			mp[c] = i;
			cin >> M[i].first >> M[i].second;
		}
		getline(cin, s);
		while(getline(cin, s)) {
			sum = ok = 0;
			stack<pair<int, int>> stk;
			pair<int, int> a, b;
			for(int i=0; i<s.size(); i++) {
				if(s[i] != '(') {
					if(s[i] == ')') {
						if(stk.size() > 1) {
							a = stk.top();
							stk.pop();
							b = stk.top();
							stk.pop();
							if(a.first == b.second) {
								sum += b.first * b.second * a.second;
								stk.push({b.first, a.second});
							}
							else{
								ok = 1;
								break;
							}
						}
					}
					else stk.push({M[mp[s[i]]].first, M[mp[s[i]]].second});
				}
			}
			if(stk.size() == 1 && !ok) cout << sum << endl;
			else cout << "error" << endl;
		}
	}
	return 0;
}
