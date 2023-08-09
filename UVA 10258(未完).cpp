#include <bits/stdc++.h> //10258
using namespace std;
bool mycmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
	if(a.second.first == b.second.first) return a.first < b.first;
	return a.second.first > b.second.first;
}
int main() {
	int n;
	cin >> n;
	cin.get();
	cin.get();
	while(n--) {
		bool flag = true;
		int time[101];
		memset(time, 0, sizeof(time));
		int ans[101] = {0};
		vector <pair<int, pair<int, int>>> v;
		int pl, pr, ti;
		string s;
		char a;
		while(getline(cin,s) && s != "") {
			/*if(b == '\n') {
				flag = false;
				break;
			}
			else pl = b - '0';*/
			stringstream ss(s);
			ss >> pl >> pr >> ti >> a;
			//if(a == 'R' || a == 'U' || a == 'E') continue;
			for(int i=1; i<=100; i++) {
				if(pl == i) {
					if(a == 'I'){
						time[i] += 20;
						break;
					}
					else {
						time[i] += ti;
						ans[i] += 1;
						//break;
					}
				}
			}
		}
		for(int i=1; i<=100; i++) {
			if(time[i]) {
				v.push_back(make_pair(i, make_pair(ans[i], time[i])));
			}
		}
		sort(v.begin(), v.end(), mycmp);
		for(auto i:v) cout << i.first << " " << i.second.first << " " << i.second.second << endl;
		if(n != 0) cout << endl;
	}
	return 0;
}
