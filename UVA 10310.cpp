#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	double x1, y1, x2, y2;
	while(cin >> n) {
		cin >> x1 >> y1 >> x2 >> y2;
		double h1, h2;
		double holx = 0, holy = 0, disd, disg;
		vector <pair<double, double>> v;
		for(int i=0; i<n; i++) {
			cin >> h1 >> h2;
			v.push_back(make_pair(h1, h2));
		}
		for(int i=0; i<n; i++) {
			holx = max(abs(x2-v[i].first), holx);
			holy = max(abs(y2-v[i].second), holy);
		}
		disd = sqrt(pow(holx, 2)+pow(holy, 2));
		holx += x2, holy += y2;
		holx -= x1, holy -= y1;
		disg = sqrt(pow(holx, 2)+pow(holy, 2));
		holx += x1, holy += y1;
		if(disd/2.0 < disg) cout << "The gopher cannot escape.\n";
		else printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n", holx, holy);
	}
	return 0;
}
