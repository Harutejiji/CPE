#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, c = 0;
	while(cin >> n && n) {
		int sum = 0;
		string s1[n], ans1, ans2, s;
		cin.get();
		for(int i=0; i<n; i++) {
			getline(cin, s);
			ans1 += s;
		}
		sum = ans1.size();
		printf("Run #%d: ", ++c);
		cin >> m;
		cin.get();
		bool flag = true, p = true;
		for(int i=0; i<m; i++) {
			getline(cin, s);
			ans2 += s;
		}
		if((ans1 != ans2) || (n != m)) {
			flag = false;
			for(int i=0, j = 0; i<ans1.size(), j<ans2.size(); i++, j++) {
				while(ans1[i] == ' ')i++;
				while(ans2[j] == ' ')j++;
				if(ans1[i] != ans2[j]) {
					p = false;
					break;
				}
			}
		}
		if(!p && !flag) printf("Wrong Answer %d\n", sum);
		else if(!flag && p) printf("Presentation Error %d\n", sum);
		else printf("Accepted %d\n", sum);
	}
	return 0;
}
