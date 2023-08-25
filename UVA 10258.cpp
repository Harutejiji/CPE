#include <bits/stdc++.h> 
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
		int time[101];
		bool player[101];
		int ans[101] = {0};
		memset(time, 0, sizeof(time));
		memset(player, false, sizeof(player));
		vector <pair<int, pair<int, int>>> v;
		int pl, pr, ti;
		string s;
		char a;
		while(getline(cin,s) && s != "") {			
			stringstream ss(s);
			ss >> pl >> pr >> ti >> a;			
			for(int i=1; i<=100; i++) {
				if(pl == i) {
					player[i] = true;
					if(a == 'I'){
						time[i] += 20;
						break;
					}
					else {
						if(a == 'R' || a == 'U' || a == 'E') continue;
						time[i] += ti;
						ans[i] += 1;
					}
				}
			}
		}
		for(int i=1; i<=100; i++) {
			if(!ans[i]) time[i] = 0;
			if(time[i] || player[i]) {
				v.push_back(make_pair(i, make_pair(ans[i], time[i])));
			}
		}
		sort(v.begin(), v.end(), mycmp);
		for(auto i:v) cout << i.first << " " << i.second.first << " " << i.second.second << endl;
		if(n != 0) cout << endl;
	}
	return 0;
}
