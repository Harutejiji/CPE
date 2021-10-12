#include <bits/stdc++.h>
using namespace std;
int main() {
	int h;
	vector< pair<double, double>> v;
	while(cin >> h) {
		bool flag = false;
		v.clear();
		double gx, gy, dx, dy, temp1, temp2;
		cin >> gx >> gy >> dx >> dy;
		while(h--) {
			cin >> temp1 >> temp2;
			v.push_back(make_pair(temp1, temp2));
		}
		for(int i=0; i<v.size(); i++) {
			if(abs(v[i].first - gx) * 2 <= abs(v[i].first - dx)) {
				temp1 = v[i].first;
				temp2 = v[i].first;
				flag = true;
				break;
			}
		}
		if(flag) printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n", temp1, temp2);
		else printf("The gopher cannot escape.\n");
	}
	return 0;
}
