#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, c = 0;
	while(cin >> t) {
		cin.get();
		string s;
		int count = 0;
		while(t--) {
			bool flag = true;
			map<char, int> m;
			getline(cin, s);
			vector<int> v;
			for(int i=0; i<s.size(); i++) m[s[i]]++;
			for(auto i:m) v.push_back(i.second);
			//int ch = 0;
			for(int i=0; i<v.size(); i++) {
				if(s.size() < 3 || v.size() < 2) {
					flag = false;
					break;
				}
				for(int j=i+1; j<v.size(); j++) {
					if(v[i] == v[j]) {
						flag = false;
						//ch = 1;
						break;
					}
				}
				if(!flag) break;
			}
			if(flag) count++;
		}
		printf("Case %d: %d\n", ++c, count);
	}
	return 0;
}
				
