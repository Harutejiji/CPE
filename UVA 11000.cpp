#include <bits/stdc++.h>
using namespace std;//1 11 2 22
//from no.3 year the m will be no.2 year's f+m and f will be no.2 & no.1 year's f+f   	
/*	f m
	1 1
	2 2
	3 4
	5 7
	8 12
	13 20*/
int main() {
	int n;
	while(cin >> n && n > 0) {
		long long ff, mm;
		vector<long long> f = {1, 2}, m = {1, 2};
		if(n == 1) {
			cout << 1 << " " << 2 << endl;
			continue;
		}
		else if(n == 2) {
			cout << 2 << " " << 4 << endl;
			continue;
		}
		for(int i=1; i<n-1; i++) {
			mm = f[i] + m[i];
			ff = f[i] + f[i-1];
			m.push_back(mm);
			f.push_back(ff);
		}
		cout << mm << " " << ff+mm << endl;
	}
	return 0;
}		
