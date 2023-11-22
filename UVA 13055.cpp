#include <bits/stdc++.h> // test = 9
using namespace std;
int main() {
	int t;
	cin >> t;
	string s, d;
	stack<string> ans;
	while(t--) {
		cin >> s;
		if(s == "Sleep") {
			cin >> d;
			ans.push(d);
		}else if(s == "Test") {
			if(ans.empty()) cout << "Not in a dream\n";
			else cout << ans.top() << endl;
		}else if(s == "Kick") {
			if(ans.empty()) continue;
			ans.pop();
		}
	}
	return 0;
}
