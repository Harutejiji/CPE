#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n, m;
	string s;
	while(cin >> s && s != "0") {
		int c = 0;
		set<int> vis;
		cout << "Original number was " << s << endl;
		//printf("Original number was %d\n", s);
		sort(s.begin(), s.end());
		while(1) {
			n = stoi(s);
			reverse(s.begin(), s.end());
			m = stoi(s);
			printf("%d - %d = %d\n", m, n, m-n);
			n = m - n;
			s = to_string(n);
			sort(s.begin(), s.end());
			c++;
			if(vis.find(m - n) == vis.find(m - n)) break;	
			vis.insert(n);
		}
		printf("Chain length %d\n\n", c);	
	}
	return 0;
}
