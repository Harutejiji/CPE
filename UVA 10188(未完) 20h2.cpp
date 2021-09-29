#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, c = 0;
	while(cin >> n && n) {
		int sum1 = 0, sum2 = 0, sum = 0;
		bool flag = false;
		cin.get();
		string s;
		vector<string> ans, team;
		while(n--) {
			getline(cin, s);
			ans.push_back(s);
		}
		cin >> m;
		cin.get();
		while(m--) {
			getline(cin, s);
			team.push_back(s);
		}
		cout << "Run #" << ++c;
		string a;
		for(auto i:ans) {
			a = i;
			sum += a.size();
			for(int j=0; j<a.size(); j++) {
				if(a[j]!= ' ') sum1++;
			}
			//cout << sum1 << endl;
		}
		for(auto i:team) {
			a = i;
			for(int j=0; j<a.size(); j++) {
				if(a[j]!= ' ') sum2++;
			}
			//cout << sum2 << endl;
		}
		if(ans == team) {
			cout << ": Accepted " << sum-n - 1<< endl;	
			continue;
		}
		if(sum1 == sum2) {
			cout << ": Presentation Error " << sum - n - 1<< endl;
			continue;
		}
		if(sum1 != sum2) {
			cout << ": Wrong Answer " << sum - n - 1<< endl;
			continue;
		}
		
	}
	return 0;
}
