#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	map<int, string> map;
	vector<int> arr;
	while(T--) {
		map.clear();
		arr.clear();
		int n;
		string s;
		while(cin >> n) {
			arr.push_back(n);
			if(cin.get() == '\n') break;
		}
		for(int i=0; i<arr.size(); i++) {
			cin >> s;
			map[arr[i]] = s;
		}
		for(auto i:map) cout << i.second << endl;
		if(T >= 1) cout << endl;
	}
	return 0;
}
