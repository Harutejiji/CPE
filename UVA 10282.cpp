#include <bits/stdc++.h>
using namespace std;
int main() {
	vector< pair<string, string>> v;
	string s, s1, s2;
	stringstream ss;
	while(getline(cin, s) && s != "") {
		ss.clear();
		ss.str("");
		ss << s;
		ss >> s1 >> s2;
		v.push_back(make_pair(s1, s2));
	}
	while(getline(cin, s) && s != "") {
		bool flag = true;
		for(int i=0; i<v.size(); i++) {
			if(s == v[i].second) {
				cout << v[i].first << endl;
				flag = false;
				break;
			}
		}
		if(flag) cout << "eh\n";
	}
	return 0;
}
