#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, d, p, w;
	cin >> t;
	while(t--) {
		int sum = 0;
		cin >> w >> p;
		bool week[w+1];
		memset(week, false, sizeof(week));
		while(p--) {
			cin >> d;
			for(int i=d; i<=w; i+=d) {
				if(i % 7 == 0 || i % 7 == 6) week[i] = false;
				else week[i] = true;
			}
		}
		for(int i=1; i<=w; i++) {
			if(week[i]) sum++;
		}
		cout << sum << endl;
	}
	return 0;
}
