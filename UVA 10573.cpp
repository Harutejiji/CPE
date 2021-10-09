#include <bits/stdc++.h>
#define pi M_PI
using namespace std;
int main() {
	int t;
	cin >> t;
	string s;
	cin.get();
	while(getline(cin, s)) {
		double n, m, l;
		stringstream ss;
		if(s.size() > 2) {
			ss << s;
			ss >> n >> m;
			printf("%.4lf\n", pi * n * m * 2);
		} else {
			ss << s;
			ss >> l;
			printf("%.4lf\n", pi * l * l / 8);
		}
	}
	return 0;
}
